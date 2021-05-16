#ifndef B_H
# define B_H

# include "Base.hpp"

class B : public Base {

public:

    B(void);
    B(B const & src);
    ~B(void);

    B &  operator=(B const & src);

private:

};

#endif
