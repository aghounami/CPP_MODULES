/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:49:06 by aghounam          #+#    #+#             */
/*   Updated: 2024/10/11 10:49:28 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
    std::cout << "AAnimal constructor called" << std::endl;
}
AAnimal::AAnimal(std::string type) : type(type)
{
    std::cout << "AAnimal constructor called" << std::endl;
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
/* ************************************************************************** */

Cat::Cat() : AAnimal("Cat"), brain(new Brain())
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std:: endl;
    delete brain;
}

Cat& Cat::operator=(const Cat &other)
{
    this->type = other.type;
    this->brain = new Brain(*other.brain);
    std::cout << "Cat assignation operator called" << std::endl;
    return *this;
}

Cat::Cat(const Cat &other)
{
    *this = other;
    std::cout << "Cat copy constructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat sound" << std::endl;
}

/* ************************************************************************** */

Dog::Dog() :  AAnimal("Dog"), brain(new Brain())
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std:: endl;
    delete brain;
}

Dog& Dog::operator=(const Dog &other)
{
    this->type = other.type;
    this->brain = new Brain(*other.brain);
    std::cout << "Dog assignation operator called" << std::endl;
    return *this;
}

Dog::Dog(const Dog &other)
{
    *this = other;
    std::cout << "Dog copy constructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog sound" << std::endl;
}
/* ************************************************************************** */