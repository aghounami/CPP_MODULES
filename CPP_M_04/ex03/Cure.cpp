/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:11:09 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/17 21:11:10 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &other)
{
    *this = other;
}

Cure &Cure::operator=(const Cure &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

Cure::~Cure()
{
}

AMateria *Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
