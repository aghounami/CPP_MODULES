/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:45:06 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/17 17:12:53 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}
Animal::Animal(std::string type) : type(type)
{
    std::cout << "Animal parameter constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std:: endl;
}

Animal& Animal::operator=(const Animal &other)
{

    this->type = other.type;
    std::cout << "Animal assignation operator called" << std::endl;
    return *this;
}

Animal::Animal(const Animal &other)
{

    
    *this = other;
    std::cout << "Animal copy constructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}
