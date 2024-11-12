#include "Dog.hpp"

Dog::Dog() :  Animal("Dog")
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std:: endl;
}

Dog& Dog::operator=(const Dog &other)
{
    this->type = other.type;
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
