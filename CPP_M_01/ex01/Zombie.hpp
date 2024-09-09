/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:14:01 by aghounam          #+#    #+#             */
/*   Updated: 2024/09/05 10:34:13 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private :
        std::string _name;
    public :
        Zombie();           
        ~Zombie();
        void announce();
        void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif