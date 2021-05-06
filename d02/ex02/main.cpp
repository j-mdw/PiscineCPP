#include <iostream>
#include "Fixed.hpp"

int main( void ) {

    std::cout << "###### 42 Tests #######" << std::endl;
    {
        Fixed a;
        Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
        std::cout << a << std::endl;
        std::cout << ++a << std::endl;
        std::cout << a << std::endl;
        std::cout << a++ << std::endl;
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << Fixed::max( a, b ) << std::endl;
    }
    std::cout << std::endl << "###### My Tests #######" << std::endl;
    {
        Fixed d(4);
        Fixed e(4.5f);

        std::cout << d << std::endl;
        std::cout << e << std::endl;
        Fixed a = d + e;
        std::cout << a << std::endl;
        std::cout << a.getRawBits() << std::endl;
        std::cout << a.toFloat() << " | " << a.toInt() << std::endl;
        std::cout << d + e << std::endl;

        std::cout << d - e << std::endl;
        if (d < e)
            std::cout << "OK|";
        if (e > d)
            std::cout << "OK|";
        Fixed f(4);
        if (d >= f)
            std::cout << "OK|";
        if (d <= f)
            std::cout << "OK|";
        if (d == f)
            std::cout << "OK|";
        if (d != e)
            std::cout << "OK|" << std::endl;
        --a;
        std::cout << a << std::endl;
        ++a;
        std::cout << a << std::endl;
        Fixed g;
        ++g;
        std::cout << g << std::endl;
        std::cout << --a << std::endl;
        std::cout << ++a << std::endl;
        
        std::cout << "Postfix" << std::endl;
        a++;
        std::cout << a << std::endl;
        a--;
        std::cout << a << std::endl;
        std::cout << a++ << std::endl;
        std::cout << a-- << std::endl;
        std::cout << a << std::endl;

        std::cout << "Min/Max" << std::endl;
        std::cout << Fixed::max(d, e) << std::endl;
        std::cout << Fixed::min(d, e) << std::endl;
    }
    return 0;
}