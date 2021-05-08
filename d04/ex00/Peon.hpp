#ifndef PEON_H
# define PEON_H

# include <string>
# include <iostream>
# include "Victim.hpp"

class Peon: public Victim {

public:

    Peon(std::string name);
    Peon(Peon const & src);
    ~Peon(void);

    Peon &  operator=(Peon const & src);

    virtual void    getPolymorphed(void) const;

protected:
    Peon(void);

};

std::ostream & operator<<(std::ostream & o, Peon const & ins);

#endif
