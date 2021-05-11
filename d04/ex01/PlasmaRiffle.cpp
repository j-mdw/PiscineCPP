#include "PlasmaRiffle.hpp"

PlasmaRiffle::PlasmaRiffle(void) :
    AWeapon("Plasma Riffle", 5, 21)
{
    std::cout << "Plasma Riffle default constructor called" << std::endl; 
}

PlasmaRiffle::PlasmaRiffle(PlasmaRiffle const & src) :
    AWeapon(src)
{
    std::cout << "Plasma Riffle copy constructor called" << std::endl; 
}

PlasmaRiffle::~PlasmaRiffle(void)
{
    std::cout << "PlasmaRiffle destructor called" << std::endl;
}

PlasmaRiffle &
    PlasmaRiffle::operator=(PlasmaRiffle const & src)
{
    AWeapon::operator=(src);
    return (*this);
}

void
PlasmaRiffle::attack(void) const
{
    std::cout << "*Piou piou piou...*" << std::endl;
}
