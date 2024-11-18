/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:31:00 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/17 21:31:01 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(NULL) 
{
    type = "Cat";
    this->brain = new Brain();
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
    if (this != &other) {
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    std::cout << "Cat assignation operator called" << std::endl;
    return *this;
}

Cat::Cat(const Cat &other) : brain(NULL)
{
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

void Cat::getBrain() const
{
    for (int i = 0; i < 100; i++)
    {
        std::cout << brain->ideas[i] << std::endl;
    }
}
