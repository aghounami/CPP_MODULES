/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:59:03 by aghounam          #+#    #+#             */
/*   Updated: 2024/10/11 10:59:58 by aghounam         ###   ########.fr       */
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
    // atexit(f);
    AAnimal *j = new AAnimal();
    // Dog *i = new Dog();

    // Dog *k = new Dog(*i);
    // i->makeSound(); // will output the cat sound!
    j->makeSound();
    // k->makeSound();
    delete j; // should not create a leak
    // delete i;
    
    // delete k;

    return 0;
}