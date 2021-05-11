#ifndef ARMAGEDON_H
# define ARMAGEDON_H

# include "AWeapon.hpp"

class Armagedon : public AWeapon {

public:

    Armagedon(void);
    Armagedon(Armagedon const & src);
    virtual ~Armagedon(void);

    Armagedon &  operator=(Armagedon const & src);
    void    attack(void) const;

private:

};

#endif
