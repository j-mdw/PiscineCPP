#include "TinyAnt.hpp"

TinyAnt::TinyAnt(void) :
    Enemy(10, "TinyAnt")
{
    std::cout << "* Titititititititititit *" << std::endl;
}

TinyAnt::TinyAnt(TinyAnt const & src) :
    Enemy(src)
{
    std::cout << "TinyAnt Copy constructor called" << std::endl;
}

TinyAnt::~TinyAnt(void)
{
    std::cout << "* CRISP..... *" << std::endl;
}

TinyAnt &
    TinyAnt::operator=(TinyAnt const & src)
{
    Enemy::operator=(src);
    std::cout << "TinyAnt Assignment operator called" << std::endl;
    return (*this);
}