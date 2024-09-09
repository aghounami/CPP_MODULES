/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:14:29 by aghounam          #+#    #+#             */
/*   Updated: 2024/09/05 10:33:40 by aghounam         ###   ########.fr       */
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
        Zombie(std::string name);           
        ~Zombie();
        void announce();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
