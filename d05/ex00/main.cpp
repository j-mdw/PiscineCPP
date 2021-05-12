#include "Bureaucrat.hpp"
#include <iostream>

int
main(void)
{
    try {
        Bureaucrat br1("Jean", 1);
        std::cout << br1;
        br1.incGrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
    try {
        Bureaucrat br149("Pierre", 149);
        std::cout << br149;
        br149.decGrade();
        std::cout << br149;
        br149.decGrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }

}