#ifndef SUPERTRAP_H
# define SUPERTRAP_H

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <string>

class SuperTrap : public NinjaTrap, public FragTrap {

public:
    SuperTrap(void);
    SuperTrap(std::string name);
    SuperTrap(SuperTrap const & src);
    ~SuperTrap(void);

    SuperTrap &  operator=(SuperTrap const & src);

    unsigned int    rangedAttack(std::string const & target);
    unsigned int    meleeAttack(std::string const & target);
};

#endif
