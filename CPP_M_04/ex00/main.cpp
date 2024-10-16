/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:59:03 by aghounam          #+#    #+#             */
/*   Updated: 2024/10/10 11:34:33 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

int main()
{
    Animal* animal = new Cat();
    Animal animal1(*animal);
    std::cout << animal->getType() << std::endl;
    std::cout << animal1.getType() << std::endl;
    
    delete animal;
    delete &animal1;
    // std::cout << animal->getType() << std::endl;
    // std::cout << animal1->getType() << std::endl;
}