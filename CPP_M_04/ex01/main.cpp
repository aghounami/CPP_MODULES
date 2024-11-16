/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:59:03 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/15 22:50:48 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


void f()
{
    system("leaks brain");
}

int main()
{
    atexit(f);
    Dog *a = new Dog();
    Dog *k = new Dog();
    
    Dog *res = new Dog(*k);
    *res = *k;
    // Dog *i = new Dog();
    // Dog *p = new Dog(*a);

    // *i = *p;
    // i->setBrain("Idea1", 0);÷
    // k->setBrain("Idea1", 0);
    a->makeSound();
    k->makeSound();
    res->makeSound();
    // i->makeSound();
    // p->makeSound();

    delete a;
    // delete i;
    delete k;
    delete res;
    // delete p;

    return 0;
}
 