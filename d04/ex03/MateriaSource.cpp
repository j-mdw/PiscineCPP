#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) :
    materiaCount(0)
{}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    if (this->materiaCount > 0)
        this->delMateria();
    for (int i = 0; i < src.getMatCount(); i++)
        this->mArr[i] = src.getMateria(i)->clone();
}

MateriaSource::~MateriaSource(void)
{
    delMateria();
}

MateriaSource &
MateriaSource::operator=(MateriaSource const & src)
{
    if (this->materiaCount > 0)
        this->delMateria();
    for (int i = 0; i < src.getMatCount(); i++)
        this->mArr[i] = src.getMateria(i)->clone();
    return (*this);
}

void
MateriaSource::learnMateria(AMateria* m)
{
    if (this->materiaCount < 4)
    {   
        this->mArr[this->materiaCount] = m->clone();
        this->materiaCount++;
    }
}

AMateria *
MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < this->materiaCount; i++)
    {
        if (this->mArr[i]->getType() == type)
        {
            AMateria *m = this->mArr[i]->clone();
            return (m);
        }
    }
    return (NULL);
}

AMateria *
MateriaSource::getMateria(int idx) const
{
    if (idx > this->materiaCount - 1 || idx < 0)
        return (NULL);
    return (this->mArr[idx]);
}

int
MateriaSource::getMatCount(void) const
{
    return (this->materiaCount);
}

void
MateriaSource::delMateria(void)
{
    for (int i = 0; i < this->materiaCount; i++)
        delete this->mArr[i];
}