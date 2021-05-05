#include "Human.hpp"
#include <iostream>

void
    Human::meleeAttack(std::string const & target)
{
    std::cout << "Melee attack on " << target << std::endl;
}

void
    Human::rangedAttack(std::string const & target)
{
    std::cout << "Ranged attack on " << target << std::endl;
}

void
    Human::intimidatingShout(std::string const & target)
{
    std::cout << "Intimidating shout on " << target << std::endl;
}

void
    Human::action(std::string const & action_name, std::string const & target)
{
    void (Human::*human_p[128])(std::string const & target);

    human_p[(size_t) 'm'] = &Human::meleeAttack;
    human_p[(size_t) 'r'] = &Human::rangedAttack;
    human_p[(size_t) 'i'] = &Human::intimidatingShout;

    ( this->*human_p[ (size_t) action_name.at(0) ] )(target);
}