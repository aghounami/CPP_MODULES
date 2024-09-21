/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:46:23 by aghounam          #+#    #+#             */
/*   Updated: 2024/09/21 12:18:22 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ScavTrap scavTrap("ScavTrap");
    scavTrap.beRepaired(0);
    scavTrap.beRepaired(0);
    scavTrap.beRepaired(0);
    scavTrap.takeDamage(30);
    scavTrap.attack("target");
    return 0;
}