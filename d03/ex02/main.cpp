#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include "ClapTrap.hpp"

int
main(void)
{
    ClapTrap ct;

    std::cout << ct.getName() << std::endl;// Test as name is empty at this point

    std::cout << std::endl << "----- Frag Trap -----"
    << std::endl << std::endl;
    {
        FragTrap g1("toto");
        FragTrap g2("tata");

        g1.meleeAttack(g2.getName());
        g2.takeDamage(g2.getMeleeAttackDam());
        g1.rangedAttack(g2.getName());
        g2.takeDamage(g2.getRangedAttackDam());

        FragTrap g3(g1);
        g2.takeDamage(g3.vaulthunter_dot_exe(g2.getName()));
        g2.takeDamage(g3.vaulthunter_dot_exe(g2.getName()));
        g2.takeDamage(g3.vaulthunter_dot_exe(g2.getName()));
        g2.takeDamage(g3.vaulthunter_dot_exe(g2.getName()));
        g2.takeDamage(g3.vaulthunter_dot_exe(g2.getName()));
        g2.takeDamage(g3.vaulthunter_dot_exe(g2.getName()));
        g1 = g2;
        g1.takeDamage(g2.vaulthunter_dot_exe(g1.getName()));
    }
    std::cout << std::endl << std::endl << "----- Scav Trap -----"
    << std::endl << std::endl <<std::endl;

    ScavTrap s1("Marc");
    ScavTrap s2("Celine");

    s2.takeDamage(s1.meleeAttack(s2.getName()));
    s2.takeDamage(s1.rangedAttack(s2.getName()));
    s2.challengeNewcomer("Timtam");
    s1.challengeNewcomer("Tutu");
    s1.challengeNewcomer("Dom");
    s2.challengeNewcomer("Rick");
    s2.challengeNewcomer("Steph");

    return (0);
}
