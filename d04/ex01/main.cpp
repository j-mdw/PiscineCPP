#include "AWeapon.hpp"
#include "PowerFist.hpp"
#include "PlasmaRiffle.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main(void)
{
    {
        PowerFist pf1;
        PlasmaRiffle pr1;

        std::cout << pf1;
        std::cout << pr1;
        pf1.attack();
        pr1.attack();
    }
    {
        Enemy e1(150, "Bad");

        std::cout << e1;
        e1.takeDamage(100);
        std::cout << e1;
        e1.takeDamage(100);
        std::cout << e1;
        e1.takeDamage(100);
        std::cout << e1;
    }
    {
        SuperMutant sm1;
        RadScorpion rs1;

        std::cout << sm1;
        sm1.takeDamage(100);
        std::cout << sm1;
        sm1.takeDamage(100);
        std::cout << sm1;
        sm1.takeDamage(100);
        std::cout << sm1;

        std::cout << rs1;
        rs1.takeDamage(50);
        std::cout << rs1;
        rs1.takeDamage(50);
        std::cout << rs1;
        rs1.takeDamage(100);
        std::cout << rs1;
    }
    std::cout << "\n\n-------42 Tests----------\n" << std::endl;
    {
        Character* me = new Character("me");
        std::cout << *me;
        Enemy* b = new RadScorpion();
        AWeapon* pr = new PlasmaRiffle();
        AWeapon* pf = new PowerFist();
        me->equip(pr);
        std::cout << *me;
        me->equip(pf);
        me->attack(b);
        std::cout << *me;
        me->equip(pr);
        std::cout << *me;
        me->attack(b);
        std::cout << *me;
        me->attack(b);
        std::cout << *me;

        me->recoverAP();
        me->recoverAP();
        Enemy *c = new SuperMutant();
        me->equip(pf);
        me->attack(c);
        std::cout << *me;
        me->attack(c);
        std::cout << *me;
        me->attack(c);
        std::cout << *me;
        me->attack(c);
        std::cout << *me;    
    }
}