/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:40:53 by aghounam          #+#    #+#             */
/*   Updated: 2024/10/13 14:36:43 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"

void f()
{
    system("leaks Interface");
}

int main()
{
    // atexit(f);
    AMateria *m = new Ice();
    AMateria *m2 = new Cure();
    AMateria *m3 = new Ice();
    AMateria *m4 = new Cure();

    Character *c = new Character("bob");
    Character *d = new Character("alice");
    c->equip(m);
    c->equip(m2);
    c->equip(m3);
    c->equip(m4);
    
    c->use(0, *d);
    
    // std::cout << m->getType() << std::endl;
    // std::cout << m2->getType() << std::endl;
    // std::cout << m3->getType() << std::endl;
    // std::cout << m4->getType() << std::endl;

    // delete c;

    return 0;
}

