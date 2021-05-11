#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"

class Ice : public AMateria {

public:

    Ice(void);
    Ice(Ice const & src);
    ~Ice(void);

    Ice &  operator=(Ice const & src);

    AMateria* clone() const;
    void use(ICharacter& target);

private:

};

#endif
