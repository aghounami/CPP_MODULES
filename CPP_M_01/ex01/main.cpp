/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:13:52 by aghounam          #+#    #+#             */
/*   Updated: 2024/09/06 12:43:18 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie = zombieHorde(5, "walker");
    if (zombie == NULL)
    {
        std::cout << "Error: invalid name or number of zombies" << std::endl;
        return 1;
    }
    for (int i = 0; i < 5; i++)
       zombie[i].announce();
    delete [] zombie;
    return 0;   
}
