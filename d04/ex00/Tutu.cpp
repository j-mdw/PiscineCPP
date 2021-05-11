#include "Tutu.hpp"

Tutu::Tutu(void) {}

Tutu::Tutu(std::string name) : Victim(name)
{
    std::cout << "Tut tut tut." << std::endl;
}

Tutu::Tutu(Tutu const & src)
{
    this->name = src.getName();

    std::cout << "Tut tut. Wait.... it's just a copy" << std::endl;
}

Tutu::~Tutu(void)
{
    std::cout << "tuuuuuuuuuuuuu..." << std::endl;
}

Tutu &
    Tutu::operator=(Tutu const & src)
{
    this->name = src.getName();
    return (*this);
}

void
Tutu::getPolymorphed(void) const
{
    std::cout << this->name << " has turned into a titit!" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Tutu const & ins)
{
    o  << "I am " << ins.getName()
    << ", and I like bambi!" << std::endl;
    return (o);
}
