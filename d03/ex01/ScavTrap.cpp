#include "ScavTrap.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

// #### CANONICAL FORM ####

ScavTrap::ScavTrap(void) {}

ScavTrap::ScavTrap(std::string name) :
    _hitPoints(100),
    _maxHitPoints(100),
    _energyPoints(50),
    _maxEnergyPoints(50),
    _level(1),
    _name(name),
    _meleeAttackDam(20),
    _rangedAttackDam(15),
    _armorDamReduc(3)
{
    std::cout << "Default constructor called: a new Scav trap is here to serve" << std::endl;
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

// ##### GETTERS #######
unsigned int
    ScavTrap::getHitPoints(void) const
{
    return (this->_hitPoints);
}
unsigned int
    ScavTrap::getMaxHitPoints(void) const
{
    return (this->_maxHitPoints);
}
unsigned int
    ScavTrap::getEnergyPoints(void) const
{
    return (this->_energyPoints);
}
unsigned int
    ScavTrap::getMaxEnergyPoints(void) const
{
    return (this->_maxEnergyPoints);
}
unsigned int
    ScavTrap::getLevel(void) const
{
    return (this->_level);
}
std::string
    ScavTrap::getName(void) const
{
    return (this->_name);
}
unsigned int
    ScavTrap::getMeleeAttackDam(void) const
{
    return (this->_meleeAttackDam);
}
unsigned int
    ScavTrap::getRangedAttackDam(void) const
{
    return (this->_rangedAttackDam);
}
unsigned int
    ScavTrap::getArmorDamReduc(void) const
{
    return (this->_armorDamReduc);
}

//#### CLASS METHODS #####

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
ScavTrap::takeDamage(unsigned int amount)
{
    unsigned int damage;

    if (amount < this->_armorDamReduc)
        damage = 0;
    else if (this->_hitPoints < (amount - this->_armorDamReduc))
        damage = this->_hitPoints;
    else
        damage = amount - this->_armorDamReduc;

    std::cout << "Scav trap " << this->_name << " take " << damage
    << " damage" << std::endl;

    this->_hitPoints -= damage;
}

void
ScavTrap::beRepaired(unsigned int amount)
{
    unsigned int repair;

    if (this->_hitPoints == this->_maxHitPoints)
    {
        std::cout << "Scav trap " << this->_name << " is fully repaired" << std::endl; 
        return ;
    }
    if ((this->_hitPoints + amount) > this->_maxHitPoints)
        repair = this->_maxHitPoints - this->_hitPoints;
    else
        repair = amount;
    std::cout << "Scav Trap " << this->_name << " gets repaired by " << repair
    << std::endl;

    this->_hitPoints += repair;
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
