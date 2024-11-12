/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:59:03 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/11 15:42:16 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"
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
    Dog *i = new Dog();
    Dog *p = new Dog();
    // *i = *k;
    // i->setBrain("Idea1", 0);÷
    // k->setBrain("Idea1", 0);
    a->makeSound();
    k->makeSound();
    i->makeSound();
    p->makeSound();

    delete a;
    delete i;
    delete k;
    delete p;

    return 0;
}
 