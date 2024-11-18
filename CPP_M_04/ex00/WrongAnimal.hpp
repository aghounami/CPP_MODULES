/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:31:32 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/17 21:31:33 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
    
public:
    WrongAnimal();
    WrongAnimal(std::string type);
    virtual ~WrongAnimal();
    WrongAnimal& operator=(const WrongAnimal &other);
    WrongAnimal(const WrongAnimal &other);
    void makeSound() const;
    std::string getType() const;
};


#endif