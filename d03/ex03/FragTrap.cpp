#include "FragTrap.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

// #### CANONICAL FORM ####

FragTrap::FragTrap(void)
{
    std::cout << "Default (Empty) constructor called: a new frag trap joins the family" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "Name constructor called: a new frag trap joins the family" << std::endl;
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