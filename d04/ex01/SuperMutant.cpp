#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) :
    Enemy(170, "Super Mutant")
{
    std::cout << "Gaaaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & src) :
    Enemy(src)
{
    std::cout << "SuperMutant Copy constructor called" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
    std::cout << "Aaaaargg..." << std::endl;
}

SuperMutant &
    SuperMutant::operator=(SuperMutant const & src)
{
    Enemy::operator=(src);
    std::cout << "SuperMutant Assignment operator called" << std::endl;
    return (*this);
}

void
SuperMutant::takeDamage(int val)
{
    int damage;

    if (this->hp == 0)
        return ;
    else if (this->hp > val - 3)
        damage = val - 3;
    else
        damage = this->hp;
    this->hp -= damage;
    std::cout << "SuperMutant of type " << this->type << " takes "
    << damage << " damages." << std::endl;
}