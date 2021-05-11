#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"

class Cure : public AMateria {

public:

    Cure(void);
    Cure(Cure const & src);
    ~Cure(void);

    Cure &  operator=(Cure const & src);

    AMateria* clone() const;
    void use(ICharacter& target);

private:

};

#endif
