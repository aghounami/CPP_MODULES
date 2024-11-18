/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:11:30 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/17 21:29:24 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource() : count(0)
{
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    for (int i = 0; i < 4; i++)
	{
		if (other.materias[i])
			this->materias[i] = other.materias[i]->clone();
		else
			this->materias[i] = NULL;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->materias[i])
            {
                delete this->materias[i];
                this->materias[i] = NULL;
            }
            if (other.materias[i])
                this->materias[i] = other.materias[i]->clone();
        }
        this->count = other.count;
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i])
        {
            delete this->materias[i];
            this->materias[i] = NULL;
        }
    }
}

int checkadress(AMateria *m, AMateria **materias)
{
    int i = 0;
    while (i < 4)
    {
        if (m == materias[i])
            return 1;
        i++;
    }   
    return 0;
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (checkadress(m, this->materias))
        return;
    if (this->count < 4)
    {
        this->materias[this->count] = m;
        this->count++;
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i] && this->materias[i]->getType() == type)
            return this->materias[i]->clone();
    }
    return 0;
}

