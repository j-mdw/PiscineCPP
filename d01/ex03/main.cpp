#include "ZombieHorde.hpp"
#include <iostream>

int
    main(void)
{
    ZombieHorde the_horde(2);
    ZombieHorde *the_bigger_horde;

    std::cout << "The horde" << std::endl;
    the_horde.annonce();

    the_bigger_horde = new ZombieHorde(5);
    std::cout << "The Bigger Horde" << std::endl;
    the_bigger_horde->annonce();
    delete the_bigger_horde; // Will this actually call the destructor??

    return (0);
}