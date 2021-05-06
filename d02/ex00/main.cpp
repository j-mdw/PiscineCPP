#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    
	{
	Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
	}
	{
	Fixed *h = new Fixed();
	Fixed i(*h);
	delete h;
    std::cout << i.getRawBits() << std::endl;
	}
	return 0;
}
