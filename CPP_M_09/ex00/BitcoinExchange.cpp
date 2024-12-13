/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:07:32 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/13 10:05:06 by aghounam         ###   ########.fr       */
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

void find_key(std::map<std::string, std::string> database, std::string input_file)
{
    std::string line;
    std::ifstream input(input_file);
    if (!input.good())
    {
        std::cerr << "Error: File does not exist." << std::endl;
        exit (1);
    }
    while (std::getline(input, line))
    {
        if (line == "date | value")
            continue;
        std::string::size_type pos = line.find(" | ");
        if (pos != std::string::npos)
        {
            std::string inputkey = line.substr(0, pos);
            std::string value = line.substr(pos + 3);
            if (std::atof(value.c_str()) < 0)
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
        else if (pos == std::string::npos)
            std::cout << "Error: bad input => " << line << std::endl;
    }
}