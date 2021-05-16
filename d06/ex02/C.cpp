#include "C.hpp"

C::C(void) {}

C::C(C const & src)
{
    (void)src;
}

C::~C(void) {}

C &
C::operator=(C const & src)
{
    (void)src;
    return (*this);
}
