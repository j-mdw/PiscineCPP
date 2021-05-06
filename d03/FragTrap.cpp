#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) :
    _hitPoints(100),
    _maxHitPoints(100),
    _energyPoints(100),
    _maxEnergyPoints(100),
    _level(1),
    _name(name),
    _meleeAttackDam(30),
    _rangedAttackDam(20),
    _armorDamReduc(5)
{
    std::cout << "Default constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    (void)src;
}

FragTrap::~FragTrap(void) {
}

FragTrap &
    FragTrap::operator=(FragTrap const & src)
{
    return (*this);
}

int
    FragTrap::getHitPoints(void) const
{
}
int
    FragTrap::getMaxHitPoints(void) const
{
}
int
    FragTrap::getEnergyPoints(void) const
{
}
int
    FragTrap::getMaxEnergyPoints(void) const
{
}
int
    FragTrap::getLevel(void) const
{
}
std::string
    FragTrap::getName(void) const
{
}
int
    FragTrap::getMeleeAttackDam(void) const
{
}
int
    FragTrap::getRangedAttackDam(void) const
{
}
int
    FragTrap::getArmorDamReduc(void) const
{
}
