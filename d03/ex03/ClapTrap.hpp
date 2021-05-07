#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>

class ClapTrap {

public:
    ClapTrap(void);
    ClapTrap(ClapTrap const & src);
    ~ClapTrap(void);

    ClapTrap &  operator=(ClapTrap const & src);

    unsigned int getHitPoints(void) const;
    unsigned int getMaxHitPoints(void) const;
    unsigned int getEnergyPoints(void) const;
    unsigned int getMaxEnergyPoints(void) const;
    unsigned int getLevel(void) const;
    std::string  getName(void) const;
    unsigned int getMeleeAttackDam(void) const;
    unsigned int getRangedAttackDam(void) const;
    unsigned int getArmorDamReduc(void) const;

    void setHitPoints(unsigned int val);
    void setMaxHitPoints(unsigned int val);
    void setEnergyPoints(unsigned int val);
    void setMaxEnergyPoints(unsigned int val);
    void setLevel(unsigned int val);
    void setName(std::string name);
    void setMeleeAttackDam(unsigned int val);
    void setRangedAttackDam(unsigned int val);
    void setArmorDamReduc(unsigned int val);

    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);

protected:
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
