#include "Bureaucrat.hpp"
#include <iostream>

int
main(void)
{
    Bureaucrat br("Jean", -10);
    std::cout << br.getName() << std::endl;
    std::cout << br.getGrade() << std::endl;
    std::cout << br;
}