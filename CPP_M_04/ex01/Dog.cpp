/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:37:22 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/15 22:50:16 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(nullptr)
{
    type = "Dog";
    this->brain = new Brain();
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
    if (this != &other) {
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    std::cout << "Dog assignation operator called" << std::endl;
    return *this;
}

Dog::Dog(const Dog &other) : brain(NULL)
{
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

void Dog::getBrain() const
{
    for (int i = 0; i < 100; i++)
    {
        std::cout << brain->ideas[i] << std::endl;
    }
}