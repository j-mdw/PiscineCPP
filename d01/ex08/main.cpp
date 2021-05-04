#include "Human.hpp"

int main(void)
{
    Human human1;

    human1.action("meleeAttack", "Enemy");
    human1.action("rangedAttack", "Enemy");
    human1.action("intimidatingShout", "Enemy");
}
