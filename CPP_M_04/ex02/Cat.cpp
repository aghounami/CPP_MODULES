#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(nullptr) 
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

void Cat::getBrain() const
{
    for (int i = 0; i < 100; i++)
    {
        std::cout << brain->ideas[i] << std::endl;
    }
}