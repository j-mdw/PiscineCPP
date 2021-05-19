#include "mutantstack.hpp"
#include <iostream>

int
main(void)
{
    std::cout << "\n\nMy-tests\n" << std::endl;
    {
        MutantStack<int> ms;

        ms.push(10);
        ms.push(5);
        std::cout << ms.top() << std::endl;

        MutantStack<int>::iterator it =  ms.begin();
        std::cout << *it << std::endl;
        std::cout << *(++it) << std::endl;
        ms.push(707);
        ms.push(107);
        std::cout << *(++it) << std::endl;
        std::cout << *(++it) << std::endl;

        
        MutantStack<int>::iterator ite =  ms.end();
        std::cout << *ite << std::endl;
        std::cout << *(--ite) << std::endl;
        std::cout << *(--ite) << std::endl;
        std::cout << *(--ite) << std::endl;
        ms.push(8);
        std::cout << *(--ite) << std::endl;
    }
    std::cout << "\n\n42-tests\n" << std::endl;
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    return 0;
}
