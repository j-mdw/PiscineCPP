#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main()
{
    {
    std::cout << "-----42 Tests-----" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    }
    std::cout << "-----My Tests-----" << std::endl;
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure()); 
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());

        ICharacter* me = new Character("me");
        AMateria* tmp;
        AMateria* tmp1;
        AMateria* tmp2;

        tmp1 = src->createMateria("ice");
        me->equip(tmp1);
        tmp2 = src->createMateria("cure");
        me->equip(tmp2);
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp); 
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        me->use(2, *bob);
        me->use(3, *bob);
        me->unequip(0);
        me->unequip(0);
        delete bob;
        delete me;
        delete src;
        delete tmp1;
        delete tmp2;
    }
    return 0;
}