/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:12:07 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/17 21:21:36 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public AAnimal
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