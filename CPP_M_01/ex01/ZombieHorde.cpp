/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:59:21 by aghounam          #+#    #+#             */
/*   Updated: 2024/09/06 12:40:28 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0 || name.empty())
        return NULL;
    Zombie *zombie = new Zombie[N];
    for(int i = 0; i < N; i++)
        zombie[i].setName(name);
    return zombie;
}
