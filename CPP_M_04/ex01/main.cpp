/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:59:03 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/08 16:14:30 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "animal.hpp"

void f()
{
    system("leaks brain");
}

int main()
{
    atexit(f);
    Animal *a = new Dog();
    Animal *i = new Cat();
    Animal *k = new Dog();
    // *i = *k;
    // i->setBrain("Idea1", 0);
    // k->setBrain("Idea1", 0);
    a->makeSound();
    i->makeSound();
    k->makeSound();

    delete a;
    delete i;
    delete k;

    return 0;
}
 