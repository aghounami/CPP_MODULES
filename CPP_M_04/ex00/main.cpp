/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:59:03 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/11 16:10:32 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    WrongAnimal* animal = new WrongCat();
    WrongAnimal* animal3=  new WrongAnimal();

    std::cout << "type : " << animal->getType() << std::endl;
    std::cout << "type : " << animal3->getType() << std::endl;
    
    animal->makeSound();
    animal3->makeSound();
    delete animal;
    delete animal3;
}