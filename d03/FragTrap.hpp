#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <string>

class FragTrap {

public:

    FragTrap(std::string name);
    FragTrap(FragTrap const & src);
    ~FragTrap(void);

    FragTrap &  operator=(FragTrap const & src);

    void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

    int getHitPoints(void) const;
    int getMaxHitPoints(void) const;
    int getEnergyPoints(void) const;
    int getMaxEnergyPoints(void) const;
    int getLevel(void) const;
    std::string getName(void) const;
    int getMeleeAttackDam(void) const;
    int getRangedAttackDam(void) const;
    int getArmorDamReduc(void) const;



private:
    int             _hitPoints;
    int             _maxHitPoints;
    int             _energyPoints;
    int             _maxEnergyPoints;
    int             _level;
    std::string     _name;
    int             _meleeAttackDam;
    int             _rangedAttackDam;
    int             _armorDamReduc;

};

#endif
