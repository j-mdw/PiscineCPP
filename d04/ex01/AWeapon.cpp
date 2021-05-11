#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
    std::cout << "Weapon default constructor called" << std::endl;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
    name(name),
    apcost(apcost),
    damage(damage)
{
    std::cout << "Weapon constructor called" << std::endl;
}


AWeapon::AWeapon(AWeapon const & src)
{
    this->name = src.getName();
    this->apcost = src.getAPCost();
    this->damage = src.getDamage();
    std::cout << "AWeapon Copy constructor called" << std::endl;
}

AWeapon::~AWeapon(void)
{
    std::cout << "AWeapon destructor called" << std::endl;
}

AWeapon &
    AWeapon::operator=(AWeapon const & src)
{
    this->name = src.getName();
    this->apcost = src.getAPCost();
    this->damage = src.getDamage();
    std::cout << "Assignment operator called" << std::endl;
    return (*this);
}

std::string
AWeapon::getName(void) const
{
    return (this->name);
}

int        
AWeapon::getAPCost(void) const
{
    return (this->apcost);
}

int        
AWeapon::getDamage(void) const
{
    return (this->damage);
}

std::ostream & operator<<(std::ostream & o, AWeapon const & ins)
{
    o << "Weapon " << ins.getName() << "\nAP Cost: " << ins.getAPCost()
    << "\nDamage: " << ins.getDamage() << std::endl;
    return (o);
}
