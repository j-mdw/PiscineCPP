#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : _rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &
    Fixed::operator=(Fixed const & src)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_rawBits = src.getRawBits();
    return (*this);
}

int
    Fixed::getRawBits(void) const
{
    std::cout << "getRawBits called" << std::endl;
    return (this->_rawBits);
}

void
    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits called" << std::endl;
    this->_rawBits = raw;
}

int const Fixed::fracBits = 8;
