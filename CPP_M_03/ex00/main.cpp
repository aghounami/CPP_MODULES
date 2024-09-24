/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:46:23 by aghounam          #+#    #+#             */
/*   Updated: 2024/09/21 14:35:36 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap clapTrap("ClapTrap");
    ClapTrap a("a");
    ClapTrap b("a");
    // a.attack("target");
    a.beRepaired(-9);
    
    // a.takeDamage(9);
    
   
    return 0;
}