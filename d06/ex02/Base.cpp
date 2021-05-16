#include "Base.hpp"

Base::Base(void) {}

Base::Base(Base const & src)
{
    (void)src;
}

Base::~Base(void) {}

Base &
Base::operator=(Base const & src)
{
    (void)src;
    return (*this);
}
