#include <iostream>
#include "Array.hpp"

int
main(void)
{
    try {
        Array <float>a1;

        std::cout << a1.size() << std::endl;
        Array <float>a2(4);
        std::cout << a2.size() << std::endl;
        a2[0] = 10.09;
        a2[3] = 5.0008;
        std::cout << a2[0] << " " << a2[3] << std::endl;

        Array <float>a3(a2);
        std::cout << a3[0] << " " << a3[3] << std::endl;
        a2[0]++;
        std::cout << a2[0] << " " << a2[3] << std::endl;
        std::cout << a3[0] << " " << a3[3] << std::endl;

        a1 = a3;
        std::cout << a1[0] << " " << a1[3] << std::endl;

        std::cout << a2[9] << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}