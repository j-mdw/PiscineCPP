#include "ZombieEvent.hpp"
#include <ctime>

ZombieEvent::ZombieEvent(void) : _type("no_type") {
}

ZombieEvent::~ZombieEvent(void) {
}

void
    ZombieEvent::SetZombieType(std::string type) {
    this->_type = type;
}

Zombie *
    ZombieEvent::newZombie(std::string name) const {
    
    Zombie * new_zombie = new Zombie(this->_type, name);
    return (new_zombie);
}

Zombie *
    ZombieEvent::randomChump(int id) const {
    
    std::string         name;
    static const char   alpha[] = "abcdefghijklmnopqrstuvwxyz";
    Zombie              *z1;
    int                 size;
    int                 i;
    
    std::srand(std::time(NULL) + id);
    size = std::rand() % 10 + 3;
    
    for (i = 0; i < size ; i++)
        name += alpha[std::rand() % 26];

    z1 = this->newZombie(name);
    z1->annonce();
    return (z1);
}
    