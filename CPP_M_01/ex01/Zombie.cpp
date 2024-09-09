/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:45:32 by aghounam          #+#    #+#             */
/*   Updated: 2024/08/28 20:13:58 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie 🧟‍♀️ constructor called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << _name << " destructor called" << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->_name = name;
}

void    Zombie::announce()
{
    std::cout << "  My name is " << _name << std::endl;
}
