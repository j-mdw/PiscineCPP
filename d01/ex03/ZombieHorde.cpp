#include "ZombieHorde.hpp"
#include <ctime>
#include <unistd.h>
#include <cstdlib>

ZombieHorde::ZombieHorde(int n) : _type("random"), _horde_size(n)  {
    int i;

    this->_horde = new Zombie*[n];
    i = 0;
    while (i < n)
    {
        this->_horde[i] = this->randomChump(i);
        i++;
    }
}

ZombieHorde::~ZombieHorde(void) {
    int i = 0;
    while (i < this->_horde_size)
    {
        delete this->_horde[i];
        i++;
    }
    delete [] this->_horde;
}

void
    ZombieHorde::SetZombieType(std::string type) {
    this->_type = type;
}

void
    ZombieHorde::annonce(void) const {
    int i = 0;
    
    for (i = 0; i < this->_horde_size; i++)
        this->_horde[i]->annonce();
}

Zombie *
    ZombieHorde::newZombie(std::string name) const {

    Zombie * new_zombie = new Zombie(this->_type, name);
    return (new_zombie);
}

Zombie *
    ZombieHorde::randomChump(int id) const {
    
    std::string         name;
    static const char   alpha[] = "abcdefghijklmnopqrstuvwxyz";
    Zombie              *z1;
    int                 size;
    int                 i;

    std::srand((unsigned)std::time(NULL) + id + clock());
    size = std::rand() % 10 + 3;
    
    for (i = 0; i < size ; i++)
        name += alpha[std::rand() % 26];
    z1 = this->newZombie(name);
    return (z1);
}