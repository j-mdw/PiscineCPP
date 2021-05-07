#include "SuperTrap.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

// #### CANONICAL FORM ####

SuperTrap::SuperTrap(void)
{
    std::cout << "Name constructor called: a new Super trap joins the team" << std::endl;
}

SuperTrap::SuperTrap(std::string name)
{
    std::cout << "Name constructor called: a new Super trap joins the team" << std::endl;
    this->setHitPoints(100);
    this->setMaxHitPoints(100);
    this->setEnergyPoints(120);
    this->setMaxEnergyPoints(120);
    this->setLevel(1);
    this->setMeleeAttackDam(60);
    this->setRangedAttackDam(20);
    this->setArmorDamReduc(5);
    this->setName(name);
}

SuperTrap::SuperTrap(SuperTrap const & src)
{
    std::cout << "Copy constructor called: a new frag trap joins the family, wait, its just a copy.." << std::endl;
    
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

SuperTrap::~SuperTrap(void)
{
    std::cout << "Destructor called: bye bye Super trap!" << std::endl;
}

SuperTrap &
    SuperTrap::operator=(SuperTrap const & src)
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

unsigned int
SuperTrap::rangedAttack(std::string const & target)
{
    return (this->NinjaTrap::rangedAttack(target));
}

unsigned int
SuperTrap::meleeAttack(std::string const & target)
{
    return (this->FragTrap::meleeAttack(target));
}