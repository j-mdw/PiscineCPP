#include "FragTrap.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

// #### CANONICAL FORM ####

FragTrap::FragTrap(void)
{
    std::cout << "Default (Empty) constructor called: a new frag trap joins the family" << std::endl;
}


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
    std::cout << "Name constructor called: a new frag trap joins the family" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
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


FragTrap::~FragTrap(void)
{
    std::cout << "Destructor called: bye bye Frag trap" << std::endl;
}

FragTrap &
    FragTrap::operator=(FragTrap const & src)
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
    FragTrap::getHitPoints(void) const
{
    return (this->_hitPoints);
}
unsigned int
    FragTrap::getMaxHitPoints(void) const
{
    return (this->_maxHitPoints);
}
unsigned int
    FragTrap::getEnergyPoints(void) const
{
    return (this->_energyPoints);
}
unsigned int
    FragTrap::getMaxEnergyPoints(void) const
{
    return (this->_maxEnergyPoints);
}
unsigned int
    FragTrap::getLevel(void) const
{
    return (this->_level);
}
std::string
    FragTrap::getName(void) const
{
    return (this->_name);
}
unsigned int
    FragTrap::getMeleeAttackDam(void) const
{
    return (this->_meleeAttackDam);
}
unsigned int
    FragTrap::getRangedAttackDam(void) const
{
    return (this->_rangedAttackDam);
}
unsigned int
    FragTrap::getArmorDamReduc(void) const
{
    return (this->_armorDamReduc);
}

//#### CLASS METHODS #####

unsigned int
FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " attaque " << target
    << " à distance, causant " << this->_rangedAttackDam << " points de dégâts !"
    << std::endl;
    return (this->_rangedAttackDam);
}

unsigned int
FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " attaque " << target
    << " en melee, causant " << this->_meleeAttackDam << " points de dégâts !"
    << std::endl;
    return (this->_meleeAttackDam);
}

void
FragTrap::takeDamage(unsigned int amount)
{
    unsigned int damage;

    if (amount < this->_armorDamReduc)
        damage = 0;
    else if (this->_hitPoints < (amount - this->_armorDamReduc))
        damage = this->_hitPoints;
    else
        damage = amount - this->_armorDamReduc;

    std::cout << "FR4G-TP " << this->_name << " take " << damage
    << " damage" << std::endl;

    this->_hitPoints -= damage;
}

void
FragTrap::beRepaired(unsigned int amount)
{
    unsigned int repair;

    if (this->_hitPoints == this->_maxHitPoints)
    {
        std::cout << "FR4G-TP " << this->_name << " is fully repaired" << std::endl; 
        return ;
    }
    if ((this->_hitPoints + amount) > this->_maxHitPoints)
        repair = this->_maxHitPoints - this->_hitPoints;
    else
        repair = amount;
    std::cout << "FR4G-TP " << this->_name << " gets repaired by " << repair
    << std::endl;

    this->_hitPoints += repair;
}

unsigned int
FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    std::string rand_attacks[] = {
        " Coup de balai ",
        " Lancer de pomme de pin ",
        " Souffleuse de farine ",
        " Pomme enpoisonee ",
        " Amsterdamer "
    };
    if (this->_energyPoints < 25)
    {
        std::cout << this->_name << " cannot attack, not enough energy" << std::endl;
        return (0);
    }
    else
    {
        std::srand(time(NULL) + clock());
        std::cout << "FR4G-TP " << this->_name << " attaque " << target
        <<  rand_attacks[std::rand() % 5] << ", causant " << 25 << " points de dégâts !"
        << std::endl;
       this->_energyPoints -= 25;
       return (25);
    }
}