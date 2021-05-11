#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) :
    Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & src) :
    Enemy(src)
{
    std::cout << "RadScorpion Copy constructor called" << std::endl;
}

RadScorpion::~RadScorpion(void)
{
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion &
    RadScorpion::operator=(RadScorpion const & src)
{
    Enemy::operator=(src);
    std::cout << "RadScorpion Assignment operator called" << std::endl;
    return (*this);
}