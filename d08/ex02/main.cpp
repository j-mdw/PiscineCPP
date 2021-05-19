#include "MutantStack.hpp"
#include <iostream>

int
main(void)
{
    MutantStack<int> ms;

    ms.push(10);
    ms.push(5);
    std::cout << ms.top() << std::endl;

    MutantStack<int>::iterator it =  ms.begin();
    std::cout << *it << std::endl;
    std::cout << *(--it) << std::endl;
    std::cout << *(++it) << std::endl;
    std::cout << *(++it) << std::endl;

    
    MutantStack<int>::iterator ite =  ms.end();
    std::cout << *ite << std::endl;
    std::cout << *(++ite) << std::endl;
    std::cout << *(--ite) << std::endl;
    std::cout << *(--ite) << std::endl;
    ms.push(8);
    std::cout << *(--ite) << std::endl;


}
