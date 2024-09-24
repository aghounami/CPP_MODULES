/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 00:06:57 by aghounam          #+#    #+#             */
/*   Updated: 2024/09/21 12:37:14 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "FragTrap constructor called" << std::endl; 
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other) {
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
    std::cout << "FragTrap assignation operator called" << std::endl;
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << this->name << " high fives guys" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    std::cout << "FragTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}