/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:07:16 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/12 23:26:58 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string get_lower_key(const std::map<std::string, std::string>& database, const std::string& inputkey) {
    // Initialize a reverse iterator to search for the lower key
    std::__1::map<std::__1::string, std::__1::string>::const_iterator it = database.lower_bound(inputkey);

    // Check if the iterator points to the first element or the map is empty
    if (it == database.begin()) {
        return "No lower key found.";
    }

    // Move one step back to get the key before `inputkey`
    --it;

    // Return the key found
    return it->first;
}


void find_key(std::map<std::string, std::string> database)
{
    std::string line;
    std::ifstream input("input.csv");
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
                    std::cout << inputkey << " => " << value << " = " << \
                        std::atof(database[inputkey].c_str()) * std::atof(value.c_str()) << std::endl;
                else
                    std::cout << inputkey << " => " << value << " = " << 
                        std::atof(database[get_lower_key(database, inputkey)].c_str()) * \
                            std::atof(value.c_str()) << std::endl;
            }
        }
        else if (pos == std::string::npos)
            std::cout << "Error: bad input => " << line << std::endl;
    }
}

int main()
{
    std::map<std::string, std::string> database;

    std::ifstream filedata("data.csv");

    if (!filedata.good())
    {
        std::cerr << "Error: File does not exist." << std::endl;
        return 1;
    }
    std::string line;
    while (std::getline(filedata, line))
    {
        if (line == "date,exchange_rate")
            continue;
        std::string::size_type pos = line.find(",");
        if (pos != std::string::npos)
        {
            std::string key = line.substr(0, pos);
            std::string value = line.substr(pos + 1);
            database[key] = value;
            // std::cout << key << value << std::endl;
        }
    }
    find_key(database);
}