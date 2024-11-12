#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &other)
{
    *this = other;
}

Ice &Ice::operator=(const Ice &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

Ice::~Ice()
{
}

AMateria *Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
