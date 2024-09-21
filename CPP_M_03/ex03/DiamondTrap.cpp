/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:57:28 by aghounam          #+#    #+#             */
/*   Updated: 2024/09/21 12:26:28 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap() {
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
    std::cout << "DiamondTrap constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 30;
    
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) {
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = src;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap  &DiamondTrap::operator=(const DiamondTrap &other) {
    std::cout << "DiamondTrap assignation operator called" << std::endl;
    this->name = other.name;
    return *this;
}

void DiamondTrap::whoAmI() {
    std::cout << "My name is " << this->name << " and my ClapTrap name is " << this->ClapTrap::name << std::endl;
}