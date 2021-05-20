#include "IncPtr.hpp"

IncPtr::IncPtr(void) {}

IncPtr::IncPtr(IncPtr const & src)
{
    (void)src;
}

IncPtr::~IncPtr(void) {}

IncPtr &
IncPtr::operator=(IncPtr const & src)
{
    return (*this);
}

void
IncPtr::execute(std::vector<char>::iterator it) const
{

}
