/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:11:16 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/17 21:11:17 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"


class Ice : public AMateria
{
public:
    Ice();
    Ice(const Ice &other);
    Ice &operator=(const Ice &other);
    ~Ice();
    AMateria *clone() const;
    void use(ICharacter &target);
};


#endif
