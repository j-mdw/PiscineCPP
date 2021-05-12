#include "Bureaucrat.hpp"
#include <iostream>
#include "Form.hpp"

int
main(void)
{
    std::cout << "-----Test 1-----" << std::endl;
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
    std::cout << "-----Test 2-----" << std::endl;
    try {
        Bureaucrat br0("Jackline", 0);
        std::cout << br0;
        br0.incGrade();
        std::cout << br0;
        br0.decGrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
    std::cout << "-----Test 3-----" << std::endl;
    try {
        Bureaucrat  br1("Jean", 11);
        Form        f1("Tamtam", 10, 5);
        std::cout << f1;
        br1.signForm(f1);
        std::cout << f1;
        br1.incGrade();
        br1.signForm(f1);
        std::cout << f1;
        br1.signForm(f1);
        std::cout << f1;        
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
}