#include "Victim.hpp"

Victim::Victim(void)
{
    // std::cout << "Some random victim called "<< this->name
    // << " just appeared!" << std::endl;
}

Victim::Victim(std::string name) :
    name(name)
{
    std::cout << "Some random victim called "<< this->name
    << " just appeared!" << std::endl;
}

Victim::Victim(Victim const & src)
{
    this->name = src.getName();

    std::cout << "Some random victim called "<< this->name
    << " just appeared! Wait.... it's just a copy" << std::endl;
}

Victim::~Victim(void)
{
    std::cout << "Victim " << this->name
    << " just died for no appearent reason!" << std::endl;
}

Victim &
    Victim::operator=(Victim const & src)
{
    this->name = src.getName();
    return (*this);
}

std::string
Victim::getName(void) const
{
    return (this->name);
}

void
Victim::getPolymorphed(void) const
{
    std::cout << this->name << " has turned into a cute little sheep" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Victim const & ins)
{
    o  << "I am " << ins.getName()
    << ", and I like otters!" << std::endl;
    return (o);
}
