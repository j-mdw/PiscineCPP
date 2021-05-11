#ifndef TUTU_H
# define TUTU_H

# include <string>
# include <iostream>
# include "Victim.hpp"

class Tutu: public Victim {

public:

    Tutu(std::string name);
    Tutu(Tutu const & src);
    ~Tutu(void);

    Tutu &  operator=(Tutu const & src);

    virtual void    getPolymorphed(void) const;

protected:
    Tutu(void);

};

std::ostream & operator<<(std::ostream & o, Tutu const & ins);

#endif
