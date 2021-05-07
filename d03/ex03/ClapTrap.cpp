#include "ClapTrap.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

// #### CANONICAL FORM ####

ClapTrap::ClapTrap(void)
{
    std::cout << "Default constructor called: a new Clap trap created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "Copy constructor called: a new Clap trap ... wait, its just a copy.." << std::endl;
    
    this->_hitPoints = src.getHitPoints();
    this->_maxHitPoints = src.getMaxHitPoints();
    this->_energyPoints = src.getEnergyPoints();
    this->_maxEnergyPoints = src.getMaxEnergyPoints();
    this->_level = src.getLevel();
    this->_name = src.getName();
    this->_meleeAttackDam = src.getMeleeAttackDam();
    this->_rangedAttackDam = src.getRangedAttackDam();
    this->_armorDamReduc = src.getArmorDamReduc();
}


ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called: adios Clap trap "
    << this->_name << std::endl;
}

ClapTrap &
    ClapTrap::operator=(ClapTrap const & src)
{
    std::cout << "Clap trap assignment operator called" << std::endl;

    this->_hitPoints = src.getHitPoints();
    this->_maxHitPoints = src.getMaxHitPoints();
    this->_energyPoints = src.getEnergyPoints();
    this->_maxEnergyPoints = src.getMaxEnergyPoints();
    this->_level = src.getLevel();
    this->_name = src.getName();
    this->_meleeAttackDam = src.getMeleeAttackDam();
    this->_rangedAttackDam = src.getRangedAttackDam();
    this->_armorDamReduc = src.getArmorDamReduc();
    return (*this);
}

// ##### GETTERS #######
unsigned int
    ClapTrap::getHitPoints(void) const
{
    return (this->_hitPoints);
}
unsigned int
    ClapTrap::getMaxHitPoints(void) const
{
    return (this->_maxHitPoints);
}
unsigned int
    ClapTrap::getEnergyPoints(void) const
{
    return (this->_energyPoints);
}
unsigned int
    ClapTrap::getMaxEnergyPoints(void) const
{
    return (this->_maxEnergyPoints);
}
unsigned int
    ClapTrap::getLevel(void) const
{
    return (this->_level);
}
std::string
    ClapTrap::getName(void) const
{
    return (this->_name);
}
unsigned int
    ClapTrap::getMeleeAttackDam(void) const
{
    return (this->_meleeAttackDam);
}
unsigned int
    ClapTrap::getRangedAttackDam(void) const
{
    return (this->_rangedAttackDam);
}
unsigned int
    ClapTrap::getArmorDamReduc(void) const
{
    return (this->_armorDamReduc);
}

//##### SETTERS #####

void
ClapTrap::setHitPoints(unsigned int val)
{
    this->_hitPoints = val;
}

void
ClapTrap::setMaxHitPoints(unsigned int val)
{
    this->_maxHitPoints = val;
}

void
ClapTrap::setEnergyPoints(unsigned int val)
{
    this->_energyPoints = val;
}

void
ClapTrap::setMaxEnergyPoints(unsigned int val)
{
    this->_maxEnergyPoints = val;
}

void
ClapTrap::setLevel(unsigned int val)
{
    this->_level = val;
}

void
ClapTrap::setName(std::string name)
{
    this->_name = name;
}

void
ClapTrap::setMeleeAttackDam(unsigned int val)
{
    this->_meleeAttackDam = val;
}

void
ClapTrap::setRangedAttackDam(unsigned int val)
{
    this->_rangedAttackDam = val;
}

void
ClapTrap::setArmorDamReduc(unsigned int val)
{
    this->_armorDamReduc = val;
}

void
ClapTrap::takeDamage(unsigned int amount)
{
    unsigned int damage;

    if (amount < this->_armorDamReduc)
        damage = 0;
    else if (this->_hitPoints < (amount - this->_armorDamReduc))
        damage = this->_hitPoints;
    else
        damage = amount - this->_armorDamReduc;

    std::cout << this->_name << " take " << damage
    << " damage" << std::endl;

    this->_hitPoints -= damage;
}

void
ClapTrap::beRepaired(unsigned int amount)
{
    unsigned int repair;

    if (this->_hitPoints == this->_maxHitPoints)
    {
        std::cout <<this->_name << " is fully repaired" << std::endl; 
        return ;
    }
    if ((this->_hitPoints + amount) > this->_maxHitPoints)
        repair = this->_maxHitPoints - this->_hitPoints;
    else
        repair = amount;
    std::cout << this->_name << " gets repaired by " << repair
    << std::endl;

    this->_hitPoints += repair;
}