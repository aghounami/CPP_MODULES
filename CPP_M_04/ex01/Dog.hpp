/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:30:53 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/17 21:30:54 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
    private:
        Brain *brain;
    
    public:
        Dog();
        ~Dog();
        Dog(const Dog &other);
        Dog &operator=(const Dog &other);
        void makeSound() const;
        void setBrain(std::string idea, int index);
        void getBrain() const;
};

#endif