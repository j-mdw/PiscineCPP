#include "Human.hpp"
#include <iostream>

int
    main(void)
{
    Human bob;
    Human bob2;
    Human *bob3 = new Human;

	std::cout << "Bob:" << std::endl;
    std::cout << bob.idenfify() << std::endl;
    std::cout << bob.getbrain().identify() << std::endl;
    std::cout << bob.idenfify2() << std::endl;
    std::cout << bob.getyourbrain().identify() << std::endl;
    
    std::cout << &bob << std::endl;


	std::cout << "Bob2:" << std::endl;
    std::cout << bob2.idenfify() << std::endl;
    std::cout << bob2.getbrain().identify() << std::endl;
    std::cout << bob2.idenfify2() << std::endl;
    std::cout << bob2.getyourbrain().identify() << std::endl;

    std::cout << &bob2 << std::endl;

	std::cout << "Bob3:" << std::endl;
    std::cout << bob2.idenfify() << std::endl;
    std::cout << bob3->idenfify() << std::endl;
    std::cout << bob3->getbrain().identify() << std::endl;
    std::cout << bob3->idenfify2() << std::endl;
    std::cout << bob3->getyourbrain().identify() << std::endl;
    std::cout << bob3 << std::endl;

    delete bob3;
    return (0);
}
