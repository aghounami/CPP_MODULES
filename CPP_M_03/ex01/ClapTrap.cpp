/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:46:40 by aghounam          #+#    #+#             */
/*   Updated: 2024/09/20 14:54:05 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    std::cout << "ClapTrap assignation operator called" << std::endl;
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap Destructor called" << std::endl;
}
void ClapTrap::attack(const std::string& target) {
    if (energyPoints == 0) {
        std::cout << "ClapTrap " << this->name << " is out of energy and can't attack!" << std::endl;
        return;
    }
    if (hitPoints == 0) {
        std::cout << "ClapTrap " << this->name << " is dead and can't attack!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    energyPoints -= 1;
    
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints == 0) {
        std::cout << "ClapTrap " << this->name << " is already dead and can't take more damage!" << std::endl;
        return;
    }
    
    if (amount >= hitPoints) {
        hitPoints = 0;
        std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage and is now dead!" << std::endl;
    } else {
        hitPoints -= amount;
        std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (hitPoints == 0) {
        std::cout << "ClapTrap " << this->name << " is dead and can't be repaired!" << std::endl;
        return;
    }
    if (energyPoints == 0) {
        std::cout << "ClapTrap " << this->name << " is out of energy and can't repair!" << std::endl;
        return;
    }
    
    std::cout << "ClapTrap " << this->name << " repairs itself, restoring " << amount << " hit points!" << std::endl;
    hitPoints += amount;
    energyPoints -= 1;
    std::cout << this->energyPoints << std::endl;
}
