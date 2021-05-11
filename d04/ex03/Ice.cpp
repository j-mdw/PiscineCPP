#include "Ice.hpp"
#include <iostream>

Ice::Ice(void) :
    AMateria("ice")
{}

Ice::Ice(Ice const & src) : 
    AMateria(src)
{}

Ice::~Ice(void) {}

Ice &
Ice::operator=(Ice const & src)
{
    AMateria::operator=(src);
    return (*this);
}

AMateria*
Ice::clone() const
{
    return (new Ice);
}

void
Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() <<  " *" << std::endl;
    AMateria::use(target);
}