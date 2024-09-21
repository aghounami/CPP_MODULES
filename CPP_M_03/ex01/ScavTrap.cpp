/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 20:59:11 by aghounam          #+#    #+#             */
/*   Updated: 2024/09/21 11:25:08 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
    std::cout << "ScavTrap constructor called" << std::endl;
    this->name = name;
    this->energyPoints = 50;
    this->hitPoints = 100;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    std::cout << "ScavTrap assignation operator called" << std::endl;
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->name << " has entered in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (energyPoints == 0) {
        std::cout << "ScavTrap " << this->name << " is out of energy and can't attack!" << std::endl;
        return;
    }
    if (hitPoints == 0) {
        std::cout << "ScavTrap " << this->name << " is dead and can't attack!" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    energyPoints -= 1;
}