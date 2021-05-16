#include "A.hpp"

A::A(void) {}

A::A(A const & src)
{
    (void)src;
}

A::~A(void) {}

A &
A::operator=(A const & src)
{
    (void)src;
    return (*this);
}
