/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:45:06 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/08 16:14:18 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}
Animal::Animal(std::string type) : type(type)
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std:: endl;
}

Animal& Animal::operator=(const Animal &other)
{
    this->type = other.type;
    printf("this->type: %s\n", this->type.c_str());
    printf("other->type: %s\n", other.type.c_str());
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
/* ************************************************************************** */

Cat::Cat()
{
    type = "Cat";
    brain = new Brain();
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
    *brain = *other.brain;
    std::cout << "Cat assignation operator called" << std::endl;
    return *this;
}

Cat::Cat(const Cat &other)
{
    this->brain = new Brain();
    *this = other;
    std::cout << "Cat copy constructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << this->type << " sound" << std::endl;
}

void Cat::setBrain(std::string idea, int index)
{
    brain->ideas[index] = idea;
}

/* ************************************************************************** */

Dog::Dog()
{
    type = "Dog";
    brain = new Brain();
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
    *brain = *other.brain;
    std::cout << "Dog assignation operator called" << std::endl;
    return *this;
}

Dog::Dog(const Dog &other)
{
    this->brain = new Brain();
    *this = other;
    std::cout << "Dog copy constructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << this->type << " sound" << std::endl;
}

void Dog::setBrain(std::string idea, int index)
{
    brain->ideas[index] = idea;
}



/* ************************************************************************** */