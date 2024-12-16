/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:07:32 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/16 21:05:59 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string get_lower_key(const std::map<std::string, std::string> &database, const std::string &inputkey)
{
    std::__1::map<std::__1::string, std::__1::string>::const_iterator it = database.lower_bound(inputkey);
    if (it == database.begin())
        return "No lower key found.";
    --it;
    return it->first;
}
int check_number(std::string str)
{
    for (unsigned int i = 0; i < str.size(); i++)
    {
        if ((str[i] < '0' || str[i] > '9') && str[i] != '.')
            return 1;
    }
    return 0;
}

int LeapYear(int year)
{
    return (year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0));
}

int pars_date(std::string date)
{
    if (date.size() != 10 || date[4] != '-' || date[7] != '-')
        return 1;
    int year = std::atof(date.substr(0, 4).c_str());
    int month = std::atof(date.substr(5, 2).c_str());
    int day = std::atof(date.substr(8, 2).c_str());
    if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
        return 1;
    if (month == 2)
        if ((LeapYear(year) && day > 29) || (!LeapYear(year) && day > 28))
            return 1;
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return 1;
    return 0;
}

void find_key(std::map<std::string, std::string> database, std::string input_file)
{
    std::string line;
    std::ifstream input(input_file);
    int flag = 0;
    if (!input.good())
    {
        std::cerr << "Error: File does not exist." << std::endl;
        exit(1);
    }
    while (std::getline(input, line))
    {
        if (line == "date | value")
        {
            flag = 1;
            continue;
        }
        if (flag == 0)
        {
            std::cerr << "this line <date | value> is not found" << std::endl;
            exit(0);
        }
        std::string::size_type pos = line.find(" | ");
        if (pos != std::string::npos)
        {
            std::string inputkey = line.substr(0, pos);
            if (pars_date(inputkey))
            {
                std::cout << "Error: bad input => " << inputkey << std::endl;
                continue;
            }
            std::string value = line.substr(pos + 3);
            if (std::atof(value.c_str()) < 0 || check_number(value))
                std::cout << "Error: not a positive number." << std::endl;
            else if (std::atof(value.c_str()) > 1000)
                std::cout << "Error: too large a number." << std::endl;
            else
            {
                if (database.find(inputkey) != database.end())
                    std::cout << inputkey << " => " << value << " = " << std::atof(database[inputkey].c_str()) * std::atof(value.c_str()) << std::endl;
                else
                    std::cout << inputkey << " => " << value << " = " << std::atof(database[get_lower_key(database, inputkey)].c_str()) * std::atof(value.c_str()) << std::endl;
            }
        }
        else
            std::cout << "Error: bad input => " << line << std::endl;
    }
    input.close();
}