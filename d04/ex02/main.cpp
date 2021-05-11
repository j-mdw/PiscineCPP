#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include <iostream>

int main(void)
{
    std::cout << "\n\n-----42 Tests-----\n\n" << std::endl;
    {
        ISpaceMarine* bob = new TacticalMarine;
        ISpaceMarine* jim = new AssaultTerminator;
        ISquad* vlc = new Squad;
        vlc->push(bob);
        vlc->push(jim);
        for (int i = 0; i < vlc->getCount(); ++i)
        {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
        }
        delete vlc;
    }
    std::cout << "\n\n-----My Tests-----\n" << std::endl;
    {
        Squad squad1;

        std::cout << squad1.getCount() << std::endl;

        AssaultTerminator *s1 = new AssaultTerminator;
        TacticalMarine *s2 = new TacticalMarine;

        squad1.push(s1);
        squad1.push(s2);
        squad1.getUnit(0)->meleeAttack();
        squad1.getUnit(1)->rangedAttack();

        ISpaceMarine *s3 = s1->clone();
        ISpaceMarine *s4 = s2->clone();
        s3->battleCry();
        s4->battleCry();

        Squad squad2(squad1);
        squad2.push(s3);
        squad2.push(s4);
        squad2.getUnit(2)->battleCry();
        squad2.getUnit(3)->battleCry();
        std::cout << squad2.getCount() << std::endl;
        squad1 = squad2;
        std::cout << squad1.getCount() << std::endl;
    }
}