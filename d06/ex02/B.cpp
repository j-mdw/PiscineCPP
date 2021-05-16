#include "B.hpp"

B::B(void) {}

B::B(B const & src)
{
    (void)src;
}

B::~B(void) {}

B &
B::operator=(B const & src)
{
    (void)src;
    return (*this);
}
