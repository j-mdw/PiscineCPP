#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include "Zombie.hpp"
# include <string>

class ZombieEvent {

public:

    ZombieEvent(void);
    ~ZombieEvent(void);

    void SetZombieType(std::string type);
    Zombie * newZombie(std::string name) const;
    Zombie * randomChump(int id) const;

private:

    std::string _type;

};

#endif