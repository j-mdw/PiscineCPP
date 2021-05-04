#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int main(void)
{
    {
        Weapon  club = Weapon("crued spiked club");
        HumanA bob("Bob", club);
        std::cout << club.getType() << std::endl;
        bob.attack();
        club.setType("putter");
        std::cout << club.getType() << std::endl;

        bob.attack();
    }
    {
        Weapon  club = Weapon("crued spiked club");
        HumanB jim("Jim");
        std::cout << club.getType() << std::endl;

        jim.setWeapon(club);
        std::cout << club.getType() << std::endl;
        jim.attack();
        club.setType("putter");
        std::cout << club.getType() << std::endl;
        jim.attack();
    }
    return (0);
}