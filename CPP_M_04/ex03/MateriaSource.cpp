#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : count(0)
{
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    *this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->materias[i])
                delete this->materias[i];
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
            delete this->materias[i];
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (this->count < 4)
    {
        this->materias[this->count] = m;
        this->count++;
    }
}


// createMateria(std::string const &) Returns a new Materia. The latter is a copy of the Materia previously learned by the MateriaSource whose type equals the one passed as parameter. Returns 0 if the type is unknown.


AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i] && this->materias[i]->getType() == type)
            return this->materias[i]->clone();
    }
    return 0;
}

