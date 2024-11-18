/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:59:03 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/17 21:31:22 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"



int main()
{
    const Animal* BCat = new Cat();
    Animal* BDog = new Dog();

    std::cout << "type : " << BCat->getType() << std::endl;
    std::cout << "type : " << BDog->getType() << std::endl;

    BCat->makeSound();
    BDog->makeSound();

    delete BCat;
    delete BDog;

    WrongAnimal* animal = new WrongCat();
    WrongAnimal* animal3=  new WrongAnimal();

    std::cout << "type : " << animal->getType() << std::endl;
    std::cout << "type : " << animal3->getType() << std::endl;
    
    animal->makeSound();
    animal3->makeSound();
    delete animal;
    delete animal3;
}