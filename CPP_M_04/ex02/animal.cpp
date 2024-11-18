/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:45:06 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/17 21:21:01 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
    std::cout << "AAnimal constructor called" << std::endl;
}
AAnimal::AAnimal(std::string type) : type(type)
{
    std::cout << "AAnimal parameter constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std:: endl;
}

AAnimal& AAnimal::operator=(const AAnimal &other)
{
    this->type = other.type;
    std::cout << "AAnimal assignation operator called" << std::endl;
    return *this;
}

AAnimal::AAnimal(const AAnimal &other)
{

    
    *this = other;
    std::cout << "AAnimal copy constructor called" << std::endl;
}

void AAnimal::makeSound() const
{
    std::cout << "AAnimal sound" << std::endl;
}

std::string AAnimal::getType() const
{
    return type;
}
