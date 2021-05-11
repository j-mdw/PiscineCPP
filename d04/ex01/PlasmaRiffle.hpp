#ifndef PLASMARIFFLE_H
# define PLASMARIFFLE_H

# include "AWeapon.hpp"

class PlasmaRiffle : public AWeapon {

public:

    PlasmaRiffle(void);
    PlasmaRiffle(PlasmaRiffle const & src);
    ~PlasmaRiffle(void);

    PlasmaRiffle &  operator=(PlasmaRiffle const & src);
    void    attack(void) const;

private:

};

#endif
