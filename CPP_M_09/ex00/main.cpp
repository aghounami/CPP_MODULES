/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:07:16 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/16 19:55:03 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cerr << "Error: Wrong agrument" << std::endl;
        return 1;
    }
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
        }
    }
    filedata.close();
    find_key(database, av[1]);
}
