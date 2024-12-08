/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:14:28 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/06 23:24:23 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY
#define IDENTIFY

#include <iostream>
class Base
{
public:
    virtual ~Base();
};

class A : public Base
{
public:
    ~A();
};

class B : public Base
{
public:
    ~B();
};

class C : public Base
{
public:
    ~C();
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

#endif
