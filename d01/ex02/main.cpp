#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int
    main(void)
{
    Zombie *z1;
    Zombie z2("pretty dead", "tom");
    Zombie *z3;
    ZombieEvent ze1;

    z2.annonce();
    z2.setname("Paul");
    z2.settype("dead");
    z2.annonce();

    ze1.SetZombieType("Very dead");
    z1 = ze1.newZombie("Jack");
    z1->annonce();
    z3 = ze1.randomChump(3);
    
    delete z1;
    delete z3;
}