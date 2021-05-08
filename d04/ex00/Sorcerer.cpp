#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) {}

Sorcerer::Sorcerer(std::string name, std::string title) :
    name(name),
    title(title)
{
    std::cout << this->name << ", " << this->title
    << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src)
{
    this->name = src.getName();
    this->title = src.getTitle();

    std::cout << this->name << ", " << this->title
    << ", is born! Wait.... it's just a copy" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
    std::cout << this->name << ", " << this->title
    << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer &
    Sorcerer::operator=(Sorcerer const & src)
{
    this->name = src.getName();
    this->title = src.getTitle();
    return (*this);
}

std::string
Sorcerer::getName(void) const
{
    return (this->name);
}

std::string
Sorcerer::getTitle(void) const
{
    return (this->title);
}

void
Sorcerer::polymorph(Victim const & vc) const
{
    vc.getPolymorphed();
}


std::ostream & operator<<(std::ostream & o, Sorcerer const & ins)
{
    o  << "I am " << ins.getName() << ", " << ins.getTitle()
    << ", and I like ponies!" << std::endl;
    return (o);
}