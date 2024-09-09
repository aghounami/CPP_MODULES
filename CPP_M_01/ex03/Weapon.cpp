/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:13:38 by aghounam          #+#    #+#             */
/*   Updated: 2024/08/29 15:39:16 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& _type) {
    type = _type;
}

const std::string& Weapon::getType() {
    return type;
}

void Weapon::setType(const std::string& newType) {
    type = newType;
}
