#ifndef AWEAPON_H
# define AWEAPON_H

# include <string>
#include <iostream>

class AWeapon {

public:

    AWeapon(void);
    AWeapon(std::string const & name, int apcost, int damage);
    AWeapon(AWeapon const & src);
    virtual ~AWeapon(void);

    AWeapon &  operator=(AWeapon const & src);

    std::string getName(void) const;
    int         getAPCost(void) const;
    int         getDamage(void) const;
    virtual void    attack(void) const = 0;

protected:
    std::string name;
    int apcost;
    int damage;

private:

};

std::ostream & operator<<(std::ostream & o, AWeapon const &);

#endif
