/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:46:23 by aghounam          #+#    #+#             */
/*   Updated: 2024/09/20 20:54:18 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap clapTrap("ClapTrap");
    // clapTrap.takeDamage(0);
    // clapTrap.beRepaired(1);
    // clapTrap.attack("target");
    ClapTrap a("a");
    ClapTrap b("a");
    
    clapTrap = a = b;
    // print his adress
    std::cout << "ClapTrap name: " << &clapTrap << std::endl;
    std::cout << "ClapTrap name: " << &a << std::endl;
   
    return 0;
}