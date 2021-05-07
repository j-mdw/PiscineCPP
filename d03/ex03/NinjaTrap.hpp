#ifndef NINJATRAP_H
# define NINJATRAP_H

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <string>

class NinjaTrap : public ClapTrap {

public:
    NinjaTrap(void);
    NinjaTrap(std::string name);
    NinjaTrap(NinjaTrap const & src);
    ~NinjaTrap(void);

    NinjaTrap &  operator=(NinjaTrap const & src);

    unsigned int    rangedAttack(std::string const & target);
    unsigned int    meleeAttack(std::string const & target);
    void            ninjaShoebox(FragTrap const & ct) const;
    void            ninjaShoebox(ScavTrap const & ct) const;
    void            ninjaShoebox(NinjaTrap const & ct) const;
};

#endif
