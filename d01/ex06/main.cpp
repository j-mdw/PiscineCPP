#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int main(void)
{
    {
        Weapon  club = Weapon("crued spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("putter");
        bob.attack();
    }
    {
        Weapon  club = Weapon("crued spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("putter");
        jim.attack();
    }
    return (0);
}