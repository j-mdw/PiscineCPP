#include "span.hpp"
#include <iostream>

int
main()
{
    std::cout << "\n\n-----42 TESTS-----\n" << std::endl;
    {
        Span sp = Span(5);
        sp.addNumber(5);sp.addNumber(3);
        sp.addNumber(17);sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    std::cout << "\n\n-----My TESTS-----\n" << std::endl;
    {
        try {
        Span sp(3);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        }
        catch (std::exception & e) {
            std::cerr << e.what() << std::endl;
        }
        try {
        Span sp(2);
            sp.addNumber(2);
            sp.addNumber(3);
            sp.addNumber(4);
        }
        catch (std::exception & e) {
            std::cerr << e.what() << std::endl;
        }
        std::cout << "Array size 100" << std::endl;
        try {
            Span sp(100);
            for (int i = 0; i < 98; i++)
                sp.addNumber(i);
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
            sp.addNumber(50);
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
            sp.addNumber(150);
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch (std::exception & e) {
            std::cerr << e.what() << std::endl;
        }
        std::cout << "Array size 100000" << std::endl;
        try {
            Span sp(100000);
            for (int i = 0; i < 99998; i++)
                sp.addNumber(i);
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
            sp.addNumber(50);
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
            sp.addNumber(150000);
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch (std::exception & e) {
            std::cerr << e.what() << std::endl;
        }
        
    }
}