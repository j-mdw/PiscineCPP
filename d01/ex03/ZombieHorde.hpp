#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

# include "Zombie.hpp"
# include <string>

class ZombieHorde {

public:

    ZombieHorde(int n);
    ~ZombieHorde(void);

    void    SetZombieType(std::string type);
    void    annonce(void) const;
    Zombie *newZombie(std::string name) const;
    Zombie *randomChump(int id) const;

private:

    std::string _type;
    int         _horde_size;
    Zombie      **_horde;
};

#endif