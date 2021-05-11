#include "Character.hpp"

Character::Character(void) {}

Character::Character(std::string name) :
    name(name),
    materiaCount(0)
 {}


Character::Character(Character const & src)
{
    if (this->materiaCount > 0)
        this->delMateria();
    for (int i = 0; i < src.getMatCount(); i++)
        this->mArr[i] = src.getMateria(i)->clone();
}

Character::~Character(void)
{
    delMateria();
}

Character &
Character::operator=(Character const & src)
{
    if (this->materiaCount > 0)
        this->delMateria();
    for (int i = 0; i < src.getMatCount(); i++)
        this->mArr[i] = src.getMateria(i)->clone();
    return (*this);
}

AMateria *
Character::getMateria(int idx) const
{
    if (idx > this->materiaCount - 1 || idx < 0)
        return (NULL);
    return (this->mArr[idx]);
}

int
Character::getMatCount(void) const
{
    return (this->materiaCount);
}

std::string const &
Character::getName(void) const
{
    return (this->name);
}
void
Character::equip(AMateria* m)
{
    if (this->materiaCount < 4)
    {
        this->mArr[this->materiaCount] = m;
        this->materiaCount++;
    }
}

void
Character::unequip(int idx)
{
    if (this->materiaCount > 0)
    {
        this->materiaCount--;
        if (idx < this->materiaCount)
        {
            for (int i = idx; i < this->materiaCount; i++)
                this->mArr[i] = this->mArr[i + 1];
        }
    }   
}

void
Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < this->materiaCount)
        this->mArr[idx]->use(target);
}

void
Character::delMateria(void)
{
    for (int i = 0; i < this->materiaCount; i++)
        delete this->mArr[i];
}