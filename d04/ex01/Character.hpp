#ifndef CHARACTER_H
# define CHARACTER_H

# include <string>
# include <iostream>
# include "Enemy.hpp"
# include "AWeapon.hpp"

class Character {

public:

    Character(void);
    Character(std::string const & name);
    Character(Character const & src);
    ~Character(void);

    Character &  operator=(Character const & src);

    std::string getName(void) const;
    int         getAP(void) const;
    AWeapon *   getWeapon(void) const;

    void        recoverAP(void);
    void        equip(AWeapon *);
    void        attack(Enemy *);

private:
    std::string _name;
    int         _ap;
    AWeapon *   _weapon;

};

std::ostream & operator<<(std::ostream & o, Character & ins);

#endif
