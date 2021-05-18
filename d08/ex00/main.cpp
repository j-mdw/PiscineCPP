#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int
main(void)
{
    std::cout << "\n\n-----Vector-----\n" << std::endl;
    {
        std::vector<int> v1(10, 42);
        std::vector<int>::iterator it = easyfind(v1, 12);

        std::cout << v1.size() << ' ' << v1[0]  << ' ' << v1[9] << std::endl;

        if (it == v1.end())
            std::cout << "Not found" << std::endl;
        else
            std::cout << *it << " Found" << std::endl;
        v1[5] = 12;
        it = easyfind(v1, 12);
        if (it == v1.end())
            std::cout << "Not found" << std::endl;
        else
            std::cout << *it << " Found" << std::endl;
    }
    std::cout << "\n\n-----List-----\n" << std::endl;
    {
        std::list<int> v1(20, 0);
        std::list<int>::iterator it = easyfind(v1, 0);

        // std::cout << v1.size() << ' ' << v1[0]  << ' ' << v1[9] << std::endl;

        if (it == v1.end())
            std::cout << "Not found" << std::endl;
        else
            std::cout << *it << " Found" << std::endl;
        // v1[5] = 12;
        it = easyfind(v1, 12);
        if (it == v1.end())
            std::cout << "Not found" << std::endl;
        else
            std::cout << *it << " Found" << std::endl;
        v1.push_back(13);
        it = easyfind(v1, 13);
        if (it == v1.end())
            std::cout << "Not found" << std::endl;
        else
            std::cout << *it << " Found" << std::endl;
    }
    return (0);
}