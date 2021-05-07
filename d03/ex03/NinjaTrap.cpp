#include "NinjaTrap.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

// #### CANONICAL FORM ####

NinjaTrap::NinjaTrap(void)
{
    std::cout << "Default constructor (Empty) called: a new ninja trap joins the family" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
{
    std::cout << "Name constructor called: a new ninja trap joins the family" << std::endl;
    this->setHitPoints(60);
    this->setMaxHitPoints(60);
    this->setEnergyPoints(120);
    this->setMaxEnergyPoints(120);
    this->setLevel(1);
    this->setMeleeAttackDam(60);
    this->setRangedAttackDam(5);
    this->setArmorDamReduc(0);
    this->setName(name);
}

NinjaTrap::NinjaTrap(NinjaTrap const & src)
{
    std::cout << "Copy constructor called: a new ninja trap joins the family, wait, its just a copy.." << std::endl;
    
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

NinjaTrap::~NinjaTrap(void)
{
    std::cout << "Destructor called: bye bye ninja trap" << std::endl;
}

NinjaTrap &
    NinjaTrap::operator=(NinjaTrap const & src)
{
    std::cout << "Assignment operator called" << std::endl;

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

//#### CLASS METHODS #####

unsigned int
NinjaTrap::rangedAttack(std::string const & target)
{
    std::cout << "Ninja " << this->_name << " attaque " << target
    << " à distance, causant " << this->_rangedAttackDam << " points de dégâts !"
    << std::endl;
    return (this->_rangedAttackDam);
}

unsigned int
NinjaTrap::meleeAttack(std::string const & target)
{
    std::cout << "Ninja " << this->_name << " attaque " << target
    << " en melee, causant " << this->_meleeAttackDam << " points de dégâts !"
    << std::endl;
    return (this->_meleeAttackDam);
}

void
NinjaTrap::ninjaShoebox(FragTrap const & ct) const
{
    std::cout << "Nanja attack!!!! Ninja throws a potatoe: " << ct.getName() << " gets hit...but does not loose HP..." << " Ninjas don't like Frag traps" << std::endl;
}

void
NinjaTrap::ninjaShoebox(ScavTrap const & ct) const
{
    std::cout << "Nanja attack!!!! Ninja dances provocatively: " << ct.getName() << " gets hit...but does not loose HP..." << " Ninjas don't like Scav traps" << std::endl;
}

void
NinjaTrap::ninjaShoebox(NinjaTrap const & ct) const
{
    std::cout << "Nanja attack!!!! Ninja mimics pigeons: " << ct._name << " gets hit...but does not loose HP..." << " Ninjas don't like other Ninjas" << std::endl;
}


