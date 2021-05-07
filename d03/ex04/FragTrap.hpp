#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap {

public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(FragTrap const & src);
    ~FragTrap(void);

    FragTrap &  operator=(FragTrap const & src);

    unsigned int    rangedAttack(std::string const & target);
    unsigned int    meleeAttack(std::string const & target);
    unsigned int    vaulthunter_dot_exe(std::string const & target);

};

#endif
