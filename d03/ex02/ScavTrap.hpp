#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap {

public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & src);
    ~ScavTrap(void);

    ScavTrap &  operator=(ScavTrap const & src);

    unsigned int    rangedAttack(std::string const & target);
    unsigned int    meleeAttack(std::string const & target);
    void            challengeNewcomer(std::string const & target);

};

#endif
