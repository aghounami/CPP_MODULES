
#include "Cat.hpp"


Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std:: endl;
}

Cat& Cat::operator=(const Cat &other)
{
    this->type = other.type;
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
