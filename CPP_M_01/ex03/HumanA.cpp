/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:30:04 by aghounam          #+#    #+#             */
/*   Updated: 2024/08/29 15:02:25 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& humanName, Weapon& initialWeapon) 
    :  weapon(initialWeapon)
{
    name = humanName;
}


void HumanA::attack() {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}