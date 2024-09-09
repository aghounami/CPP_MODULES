/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 19:15:23 by aghounam          #+#    #+#             */
/*   Updated: 2024/08/14 21:27:24 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <xlocale/_ctype.h>

Contact::Contact() : first_name(""), last_name(""), nickname(""), phone_number(""), darkest_secret("")
{
}

Contact::~Contact()
{
}

void Contact::setFirstName()
{
    while (1){
        
        getline(std::cin, first_name);
        if (std::cin.eof())
        {
            std::cout << "\033[1;35m" << "\nEnd of input detected. Exiting..."  << "\033[0m" << std::endl;
            std::cin.clear();
            exit(0);
        }
        if (first_name.empty() || std::all_of(first_name.begin(), first_name.end(), ::isspace))
            std::cout << "enter a valid first name: " ;
        else
            break;
    }
    
}

void Contact::setLastName()
{
    while (1){
        
        getline(std::cin, last_name);
        if (std::cin.eof())
        {
            std::cout << "\033[1;35m" << "\nEnd of input detected. Exiting..."  << "\033[0m" << std::endl;
            std::cin.clear();
            exit(0);
        }
        if (last_name.empty() || std::all_of(last_name.begin(), last_name.end(), ::isspace))
            std::cout << "enter a valid last name: " ;
        else
            break;
    }
}

void Contact::setNickname()
{
    while (1){
        
        getline(std::cin, nickname);
        if (std::cin.eof())
        {
            std::cout << "\033[1;35m" << "\nEnd of input detected. Exiting..."  << "\033[0m" << std::endl;
            std::cin.clear();
            exit(0);
        }
        if (nickname.empty() || std::all_of(nickname.begin(), nickname.end(), ::isspace))
            std::cout << "enter a valid nickname: " ;
        else
            break;
    }
}

void Contact::setPhoneNumber()
{
    while (1){
        
        getline(std::cin, phone_number);
        if (std::cin.eof())
        {
            std::cout << "\033[1;35m" << "\nEnd of input detected. Exiting..."  << "\033[0m" << std::endl;
            std::cin.clear();
            exit(0);
        }
        if (phone_number.empty() || !std::all_of(phone_number.begin(), phone_number.end(), ::isdigit) || std::all_of(phone_number.begin(), phone_number.end(), ::isspace))
            std::cout << "enter a valid phone number: " ;
        else
            break;
    }
}

void Contact::setDarkestSecret()
{
    while (1){
        
        getline(std::cin, darkest_secret);
        if (std::cin.eof())
        {
            std::cout << "\033[1;35m" << "\nEnd of input detected. Exiting..."  << "\033[0m" << std::endl;
            std::cin.clear();
            exit(0);
        }
        if (darkest_secret.empty() || std::all_of(darkest_secret.begin(), darkest_secret.end(), ::isspace))
            std::cout << "enter a valid darkest secret: " ;
        else
            break;
    }
}

std::string Contact::getFirstName()
{
    return (first_name);
}

std::string Contact::getLastName()
{
    return (last_name);
}

std::string Contact::getNickname()
{
    return (nickname);
}

std::string Contact::getPhoneNumber()
{
    return (phone_number);
}

std::string Contact::getDarkestSecret()
{
    return (darkest_secret);
}
