#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & src)
{
    (void)src;
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine(void)
{
    std::cout << "Aaaarg..." << std::endl;
}

TacticalMarine &
TacticalMarine::operator=(TacticalMarine const & src)
{
    (void)src;
    return (*this);
}

ISpaceMarine*
TacticalMarine::clone() const
{
    TacticalMarine *newSM = new TacticalMarine;
    return (newSM);
}

void 
TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT!" << std::endl;
}

void 
TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with a bolter *" << std::endl;
}

void 
TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with a chainsword *" << std::endl;
}
