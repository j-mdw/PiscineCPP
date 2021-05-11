#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & src)
{
    (void)src;
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

AssaultTerminator::~AssaultTerminator(void)
{
    std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator &
AssaultTerminator::operator=(AssaultTerminator const & src)
{
    (void)src;
    return (*this);
}

ISpaceMarine*
AssaultTerminator::clone() const
{
    AssaultTerminator *newSM = new AssaultTerminator;
    return (newSM);
}

void 
AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void 
AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}

void 
AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}
