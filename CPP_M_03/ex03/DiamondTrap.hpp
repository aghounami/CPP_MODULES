/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:57:24 by aghounam          #+#    #+#             */
/*   Updated: 2024/09/20 16:41:52 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP


#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap 
{
private:
    std::string name;
public:
    DiamondTrap();
    DiamondTrap(const DiamondTrap &other);
    DiamondTrap(std::string name);
    DiamondTrap &operator=(const DiamondTrap &other);
    ~DiamondTrap();
    using ScavTrap::attack;
    void whoAmI();
};



#endif