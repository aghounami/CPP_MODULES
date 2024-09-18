/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:46:23 by aghounam          #+#    #+#             */
/*   Updated: 2024/09/11 20:54:57 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap clapTrap("ClapTrap");
    clapTrap.takeDamage(0);
    clapTrap.attack("target");
    clapTrap.attack("target");
    clapTrap.attack("target");
    clapTrap.attack("target");
    clapTrap.attack("target");
    clapTrap.attack("target");
    clapTrap.attack("target");
    clapTrap.attack("target");
    clapTrap.attack("target");
    clapTrap.attack("target");
    clapTrap.attack("target");
    clapTrap.beRepaired(1);
    clapTrap.attack("target");
    return 0;
}