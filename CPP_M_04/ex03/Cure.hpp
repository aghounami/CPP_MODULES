/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:11:12 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/17 21:11:13 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"



class Cure : public AMateria
{
public:
    Cure();
    Cure(const Cure &other);
    Cure &operator=(const Cure &other);
    ~Cure();
    AMateria *clone() const;
    void use(ICharacter &target);
};

#endif