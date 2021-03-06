#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) : _rawBits(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed(int val)
{
    // std::cout << "Int constructor called" << std::endl;
    this->_rawBits = val << this->fracBits;
}

Fixed::Fixed(float val)
{
    float cpy = val;

    // std::cout << "Float constructor called" << std::endl;

    for (int i = 0; i < this->fracBits; i++)
        cpy *= 2;
    this->_rawBits = (int)roundf(cpy);
}

Fixed::~Fixed(void)
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed &
    Fixed::operator=(Fixed const & src)
{
    // std::cout << "Assignation operator called" << std::endl;
    this->_rawBits = src.getRawBits();
    return (*this);
}

int
    Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits called" << std::endl;
    return (this->_rawBits);
}

void
    Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits called" << std::endl;
    this->_rawBits = raw;
}

float
    Fixed::toFloat(void) const
{
    float ret;

    ret = (float)this->_rawBits;
    for (int i = 0; i < this->fracBits; i++)
        ret /= 2;
    return (ret);
}

int
    Fixed::toInt(void) const
{
    return (this->_rawBits >> Fixed::fracBits);
}

int const Fixed::fracBits = 8;

std::ostream & operator<<(std::ostream & o, Fixed const & ins)
{
    o << ins.toFloat();
    return (o);
}

bool
   Fixed::operator<(Fixed const & cmp)
{
    return (this->_rawBits < cmp._rawBits);
}

bool
   Fixed::operator<=(Fixed const & cmp)
{
    return (this->_rawBits <= cmp._rawBits);
}

bool
   Fixed::operator>(Fixed const & cmp)
{
    return (this->_rawBits > cmp._rawBits);
}

bool
   Fixed::operator>=(Fixed const & cmp)
{
    return (this->_rawBits >= cmp._rawBits);
}

bool
   Fixed::operator==(Fixed const & cmp)
{
    return (this->_rawBits == cmp._rawBits);
}

bool
   Fixed::operator!=(Fixed const & cmp)
{
    return (this->_rawBits != cmp._rawBits);
}

Fixed
   Fixed::operator+(Fixed const & cmp)
{
    Fixed tmp;

    tmp._rawBits = this->_rawBits + cmp._rawBits;
    return (tmp);
}

Fixed
   Fixed::operator-(Fixed const & cmp)
{
    Fixed tmp;

    tmp._rawBits = this->_rawBits - cmp._rawBits;
    return (tmp);
}

Fixed
   Fixed::operator*(Fixed const & cmp)
{
    float res;

    res = this->toFloat() * cmp.toFloat();
    Fixed tmp(res);
    return (tmp);
}

Fixed
   Fixed::operator/(Fixed const & cmp)
{
    float res;

    res = this->toFloat() / cmp.toFloat();
    Fixed tmp(res);
    return (tmp);
}

Fixed &
    Fixed::operator++(void)
{
    this->_rawBits++;
    return (*this);
}

Fixed &
    Fixed::operator--(void)
{
    this->_rawBits--;
    return (*this);
}

float
    Fixed::operator++(int)
{
    float val = this->toFloat();
    this->_rawBits++;
    return (val);
}

float
    Fixed::operator--(int)
{
    float val = this->toFloat();
    this->_rawBits--;
    return (val);
}

Fixed & 
    Fixed::min(Fixed & v1, Fixed & v2)
{
    if (v1.getRawBits() < v2.getRawBits())
        return (v1);
    return (v2);
}
Fixed const & 
    Fixed::min(Fixed const & v1, Fixed const & v2)
{
    if (v1.getRawBits() <= v2.getRawBits())
        return (v1);
    return (v2);
}
Fixed & 
    Fixed::max(Fixed & v1, Fixed & v2)
{
    if (v1.getRawBits() >= v2.getRawBits())
        return (v1);
    return (v2);
}
Fixed const &
    Fixed::max(Fixed const & v1, Fixed const & v2)
{
    if (v1.getRawBits() >= v2.getRawBits())
        return (v1);
    return (v2);
}