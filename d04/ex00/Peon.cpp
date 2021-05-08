#include "Peon.hpp"

Peon::Peon(void) {}

Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & src)
{
    this->name = src.getName();

    std::cout << "Zog zog. Wait.... it's just a copy" << std::endl;
}

Peon::~Peon(void)
{
    std::cout << "Bleuark..." << std::endl;
}

Peon &
    Peon::operator=(Peon const & src)
{
    this->name = src.getName();
    return (*this);
}

void
Peon::getPolymorphed(void) const
{
    std::cout << this->name << " has turned into a pink pony!" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Peon const & ins)
{
    o  << "I am " << ins.getName()
    << ", and I like otters!" << std::endl;
    return (o);
}
