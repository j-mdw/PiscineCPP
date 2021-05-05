#include "Canon.hpp"

Canon::Canon(void) {
}

Canon::Canon(Canon const & src)
{
    (void)src;
}

Canon::~Canon(void) {
}

Canon &
    Canon::operator=(Canon const & src)
{
    return (*this);
}