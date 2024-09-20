/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:46:23 by aghounam          #+#    #+#             */
/*   Updated: 2024/09/20 12:19:20 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    DiamondTrap diamondTrap("DiamondTrap");
    diamondTrap.attack("target");
    // diamondTrap.takeDamage(5);
    // diamondTrap.beRepaired(5);
    diamondTrap.whoAmI();
    // diamondTrap.highFivesGuys();
    return 0;
}