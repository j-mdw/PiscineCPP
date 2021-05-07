#include "FragTrap.hpp"
#include <iostream>

int
main(void)
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

    std::cout << g2.getHitPoints() << ": " << g2.getName() << " HP" << std::endl;
    g2.beRepaired(20);
    std::cout << g2.getHitPoints() << ": " << g2.getName() << " HP" << std::endl;
    g2.beRepaired(200);
    std::cout << g2.getHitPoints() << ": " << g2.getName() << " HP" << std::endl;
    g2.beRepaired(20);
    std::cout << g2.getHitPoints() << ": " << g2.getName() << " HP" << std::endl;
    return (0);
}
