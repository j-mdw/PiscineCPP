#include "iter.hpp"
#include <iostream>

template<typename T>
void
inc(T & val)
{
    val++;
}

void
adda(std::string & s)
{
    s += 'a';
}

int
main(void)
{
    int iarr[] = {0, 1, 2, 3, 4, 5};

    iter(iarr, 6, inc);
    for (int i = 0; i < 6; i++)
        std::cout << iarr[i] << " ";
    std::cout << std::endl;

    char carr[] = {'a', 'b', 'c'};
    iter(carr, 3, inc);
    for (int i = 0; i < 3; i++)
        std::cout << carr[i] << " ";
    std::cout << std::endl;

    std::string sarr[3] = {"hello", "templates", "bye"};
    iter(sarr, 3, adda);
    for (int i = 0; i < 3; i++)
        std::cout << sarr[i] << " ";
    std::cout << std::endl;

    return (0);
}
