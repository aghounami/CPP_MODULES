/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:11:33 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/17 21:11:34 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP


#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *materias[4];
    int count;

public:
    MateriaSource();
    MateriaSource(const MateriaSource &other);
    MateriaSource &operator=(const MateriaSource &rhs);
    ~MateriaSource();
    void learnMateria(AMateria *m);
    AMateria *createMateria(std::string const &type);
};

#endif