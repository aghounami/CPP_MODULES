#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std:: endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
    this->type = other.type;
    std::cout << "WrongCat assignation operator called" << std::endl;
    return *this;
}

WrongCat::WrongCat(const WrongCat &other)
{
    *this = other;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound" << std::endl;
}

/* ************************************************************************** */
