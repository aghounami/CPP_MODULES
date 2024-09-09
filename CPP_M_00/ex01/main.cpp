/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:09:47 by aghounam          #+#    #+#             */
/*   Updated: 2024/08/14 19:19:33 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook all;
    std::string command;

    while (1)
    {
        std::cout << "\033[1;37m" << "Enter a command: " << "\033[0m";
        getline(std::cin, command);
        if (std::cin.eof()) {
            std::cout << "\033[1;35m" << "\nEnd of input detected. Exiting..."  << "\033[0m" << std::endl;
            break;
        }
        if (command == "EXIT")
            break;
        else if (command == "ADD")
            all.addContact();
        else if (command == "SEARCH")
            all.searchContact();
        else
            std::cout << "Invalid command" << std::endl;
    }
}

