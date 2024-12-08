/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:16:10 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/06 23:18:25 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

Base::~Base()
{
    std::cout << "Destructor called" << std::endl;
}
A::~A()
{
}
B::~B()
{
}
C::~C()
{
}

Base *generate(void)
{
    time_t i = 0;
    std::time(&i);
    if (i % 2)
        return new A();
    else if (i % 3)
        return new B();
    else
        return new C();
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "im A" << std::endl;
    if (dynamic_cast<B*>(p))
        std::cout << "im B" << std::endl;
    if (dynamic_cast<C*>(p))
        std::cout << "im C" << std::endl;
}

void identify(Base& p)
{
    try{
        (void)dynamic_cast<A&>(p);
        std::cout << "im A" << std::endl;
        return ;
    }
    catch (std::bad_cast&){}
    
    try{
        (void)dynamic_cast<B&>(p);
        std::cout << "im B" << std::endl;
        return ;
    }
    catch (std::bad_cast&){}
    
    try{
        (void)dynamic_cast<C&>(p);
        std::cout << "im C" << std::endl;
        return ;
    }
    catch (std::bad_cast&){}
}
