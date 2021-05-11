#include "PowerFist.hpp"

PowerFist::PowerFist(void) :
    AWeapon("Power Fist", 8, 50)
{
    std::cout << "Power Fist default constructor called" << std::endl; 
}

PowerFist::PowerFist(PowerFist const & src) :
    AWeapon(src)
{
    std::cout << "Power Fist copy constructor called" << std::endl; 
}

PowerFist::~PowerFist(void)
{
    std::cout << "PowerFist destructor called" << std::endl;
}

PowerFist &
    PowerFist::operator=(PowerFist const & src)
{
    AWeapon::operator=(src);
    return (*this);
}

void
PowerFist::attack(void) const
{
    std::cout << "*Pschhhh... SBAM!*" << std::endl;
}
