#ifndef A_H
# define A_H

# include "Base.hpp"

class A : public Base {

public:

    A(void);
    A(A const & src);
    ~A(void);

    A &  operator=(A const & src);

private:

};

#endif
