#include "AMateria.hpp"

AMateria::AMateria(void) {}

AMateria::AMateria(std::string const & type) :
    _xp(0),
    type(type)
{}

AMateria::AMateria(AMateria const & src)
{
    this->_xp = src.getXP();
    this->type = src.getType();
}

AMateria::~AMateria(void) {}

AMateria &
AMateria::operator=(AMateria const & src)
{
    this->_xp = src.getXP();
    this->type = src.getType();
    return (*this);
}

std::string const &
AMateria::getType() const
{
    return (this->type);
}

unsigned int
AMateria::getXP() const
{
    return (this->_xp);
}

void
AMateria::use(ICharacter& target)
{
    this->_xp+= 10;
    (void)target;
}
