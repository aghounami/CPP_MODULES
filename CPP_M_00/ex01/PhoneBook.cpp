/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:09:54 by aghounam          #+#    #+#             */
/*   Updated: 2024/08/21 17:23:35 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cctype>
#include <string>


int PhoneBook::entry = 0;

PhoneBook::PhoneBook() : index(0) {
}

PhoneBook::~PhoneBook() {
}

void PhoneBook::check_index()
{
    int i = 0;
    std::string input;
    while (1)
    {
        std::cout << "\033[1;37m" << "Enter an index: " << "\033[0m";
        getline(std::cin, input);
        if (std::cin.eof())
        {
            std::cout << "\033[1;35m" << "\nEnd of input detected. Exiting..."  << "\033[0m" << std::endl;
            exit(0);
        }
        if (input.length() == 1 && input[0] >= '0' && input[0] <= '7' && contacts[input[0] - '0'].getFirstName().empty() == 0)
            break;
        else
            std::cout << "\033[1;37m" << "Invalid index" << "\033[0m" << std::endl;
    }
    i = input[0] - '0';
    std::cout << "\033[1;37m" 
    << "FIRST NAME: " << contacts[i].getFirstName() << std::endl
    << "LAST NAME: " << contacts[i].getLastName() << std::endl
    << "NICKNAME: " << contacts[i].getNickname() << std::endl
    << "PHONE NUMBER: " << contacts[i].getPhoneNumber() << std::endl
    << "DARKEST SECRET: " << contacts[i].getDarkestSecret() << "\033[0m" << std::endl;
}

void    PhoneBook::searchContact()
{

    int i = 0;
    if (contacts[0].getFirstName().empty())
    {
        std::cout << "PhoneBook is empty" << std::endl;
        return ;
    }
    else
        {
        std::cout   << "\033[1;37m" 
                    << std::string(45, '-') << std::endl
                    << "|  INDEX   |FIRST NAME| LAST NAME| NICKNAME |" << std::endl
                    << std::string(45, '-') << "\033[0m" << std::endl;
        i = 0;
        while( i < PhoneBook::entry) {
            std::cout << "\033[1;37m"
                      << "|" << std::setw(5) << i << "     |";
            if (contacts[i].getFirstName().length() > 10)
                std::cout << contacts[i].getFirstName().substr(0, 9) << ".|";
            else
                std::cout << std::setw(10) << contacts[i].getFirstName() << "|";
            if (contacts[i].getLastName().length() > 10)
                std::cout << contacts[i].getLastName().substr(0, 9) << ".|";
            else
                std::cout << std::setw(10) << contacts[i].getLastName() << "|";
            if (contacts[i].getNickname().length() > 10)
                std::cout << contacts[i].getNickname().substr(0, 9) << ".|" << std::endl;
            else
                std::cout << std::setw(10) << contacts[i].getNickname() << "|" << std::endl;
            
        i++;
        }
        std::cout << "\033[1;37m"
                    << std::string(45, '-') << "\033[0m" << std::endl;
    }
    PhoneBook::check_index();
    
}

void    PhoneBook::addContact()
{
    std::cout << "\033[1;37m" << "FIRST NAME: " << "\033[0m";
    contacts[index].setFirstName();
    std::cout << "\033[1;37m" << "LAST NAME: " << "\033[0m";
    contacts[index].setLastName();
    std::cout << "\033[1;37m" << "NICKNAME: " << "\033[0m";
    contacts[index].setNickname();
    std::cout << "\033[1;37m" << "PHONE NUMBER: " << "\033[0m";
    contacts[index].setPhoneNumber();
    std::cout << "\033[1;37m" << "DARKEST SECRET: " << "\033[0m";
    contacts[index].setDarkestSecret();
    index = (index + 1) % 8;
    PhoneBook::entry++;
    if (PhoneBook::entry > 8)
        PhoneBook::entry = 8;
}
