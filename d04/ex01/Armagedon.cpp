#include "Armagedon.hpp"

Armagedon::Armagedon(void) :
    AWeapon("Armagedon", 20, 150)
{
    std::cout << "Armagedon default constructor called" << std::endl; 
}

Armagedon::Armagedon(Armagedon const & src) :
    AWeapon(src)
{
    std::cout << "Armagedon copy constructor called" << std::endl; 
}

Armagedon::~Armagedon(void)
{
    std::cout << "Armagedon destructor called" << std::endl;
}

Armagedon &
    Armagedon::operator=(Armagedon const & src)
{
    AWeapon::operator=(src);
    return (*this);
}

void
Armagedon::attack(void) const
{
    std::cout << "*Wwwwwooooorrrrrffffffff!*" << std::endl;
}
