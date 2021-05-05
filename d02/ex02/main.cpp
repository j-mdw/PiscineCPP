#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    Fixed d(4);
    Fixed e(4.5f);
    // std::cout << d.getRawBits() << std::endl;
    // std::cout << e.getRawBits() << std::endl;
    // std::cout << d.toInt() << std::endl;
    // std::cout << e.toInt() << std::endl;
    // std::cout << e.toFloat() << std::endl;
    // std::cout << d.toFloat() << std::endl;
    // std::cout << e << std::endl;

    std::cout << d << std::endl;
    std::cout << e << std::endl;
    Fixed a = d + e;
    std::cout << a << std::endl;
    std::cout << a.getRawBits() << std::endl;
    std::cout << a.toFloat() << " | " << a.toInt() << std::endl;
    std::cout << d + e << std::endl;

    std::cout << d - e << std::endl;
    if (d < e)
        std::cout << "OK |";
    if (e > d)
        std::cout << "OK |";
    Fixed f(4);
    if (d >= f)
        std::cout << "OK |";
    if (d <= f)
        std::cout << "OK |";
    if (d == f)
        std::cout << "OK |";
    if (d != e)
        std::cout << "OK |";


    return 0;
}