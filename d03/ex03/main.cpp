#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int
main(void)
{
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
    {
        ScavTrap s1("Marc");
        ScavTrap s2("Celine");

        s2.takeDamage(s1.meleeAttack(s2.getName()));
        s2.takeDamage(s1.rangedAttack(s2.getName()));
        s2.challengeNewcomer("Timtam");
        s1.challengeNewcomer("Tutu");
        s1.challengeNewcomer("Dom");
        s2.challengeNewcomer("Rick");
        s2.challengeNewcomer("Steph");
    }
    std::cout << std::endl << std::endl << "----- Ninja Trap -----"
    << std::endl << std::endl <<std::endl;
    {
        NinjaTrap n1("Bill");
        NinjaTrap n2("Billbill");
        ScavTrap  s1("Titi");
        FragTrap  f1("FriFri");

        n1.ninjaShoebox(n2);
        n1.ninjaShoebox(s1);
        n1.ninjaShoebox(f1);
    }
    {
        NinjaTrap n1("bil");
        FragTrap ft1("frac");

        NinjaTrap n2 = n1;
        FragTrap ft2 = ft1;
    }
    return (0);
}
