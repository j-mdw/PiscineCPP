#include "ScavTrap.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

// #### CANONICAL FORM ####

ScavTrap::ScavTrap(void)
{
    std::cout << "Default constructor called: a new Scav trap is here to serve" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "Name constructor called: a new Scav trap is here to serve" << std::endl;
    this->setHitPoints(100);
    this->setMaxHitPoints(100);
    this->setEnergyPoints(100);
    this->setMaxEnergyPoints(100);
    this->setLevel(1);
    this->setMeleeAttackDam(30);
    this->setRangedAttackDam(20);
    this->setArmorDamReduc(5);
    this->setName(name);
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
    std::cout << "Copy constructor called: a new Scav trap is here to... wait, its just a copy.." << std::endl;
    
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

ScavTrap::~ScavTrap(void)
{
    std::cout << "Destructor called: orvidezen Scav trap "
    << this->_name << std::endl;
}

ScavTrap &
    ScavTrap::operator=(ScavTrap const & src)
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

//#### METHODS #####

unsigned int
ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "Scav trap " << this->_name << " attaque " << target
    << " à distance, causant " << this->_rangedAttackDam << " points de dégâts !"
    << std::endl;
    return (this->_rangedAttackDam);
}

unsigned int
ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "Scav trap " << this->_name << " attaque " << target
    << " en melee, causant " << this->_meleeAttackDam << " points de dégâts !"
    << std::endl;
    return (this->_meleeAttackDam);
}

void
ScavTrap::challengeNewcomer(std::string const & target)
{
    std::string rand_chall[] = {
        " mange du sable ",
        " mets un slipe sur ta tete ",
        " fais le grognement du serpent ",
        " fais une roulade arriere ",
        " ecris un livre sur l'acrhitecture du 11eme siecle "
    };
    // if (this->_energyPoints < 25)
    // {
    //     std::cout << this->_name << " cannot attack, not enough energy" << std::endl;
    // }
    // else
    {
        std::srand(time(NULL) + clock());
        std::cout << "Scav trap " << this->_name << " challenges " << target << " :"
        <<  rand_chall[std::rand() % 5] << "!" << std::endl;
    //    this->_energyPoints -= 25;
    }
}
