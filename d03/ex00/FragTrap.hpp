#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <string>

class FragTrap {

public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(FragTrap const & src);
    ~FragTrap(void);

    FragTrap &  operator=(FragTrap const & src);

    unsigned int    rangedAttack(std::string const & target);
    unsigned int    meleeAttack(std::string const & target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
    unsigned int    vaulthunter_dot_exe(std::string const & target);

    unsigned int getHitPoints(void) const;
    unsigned int getMaxHitPoints(void) const;
    unsigned int getEnergyPoints(void) const;
    unsigned int getMaxEnergyPoints(void) const;
    unsigned int getLevel(void) const;
    std::string  getName(void) const;
    unsigned int getMeleeAttackDam(void) const;
    unsigned int getRangedAttackDam(void) const;
    unsigned int getArmorDamReduc(void) const;



private:
    unsigned int    _hitPoints;
    unsigned int    _maxHitPoints;
    unsigned int    _energyPoints;
    unsigned int    _maxEnergyPoints;
    unsigned int    _level;
    std::string     _name;
    unsigned int    _meleeAttackDam;
    unsigned int    _rangedAttackDam;
    unsigned int    _armorDamReduc;

};

#endif
