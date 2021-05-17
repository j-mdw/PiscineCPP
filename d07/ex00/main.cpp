#include "whatever.hpp"
#include <iostream>

int
main(void)
{


	std::cout << "\n-----42 TESTS-----\n\n";
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	std::cout << "\n-----MY TESTS-----\n";

	int a = 10;
	int b = 30;
	int *p1 = & a;
	int *p2 = & b;
	std::cout << "\n-----MAX-----\n\n";
	std::cout << max(10, 20) << std::endl;
	std::cout << max(10, 10) << std::endl;
	std::cout << max(-10, -110) << std::endl;
	std::cout << max(10.4, 20.234) << std::endl;
	std::cout << max(10.22f, 10.22f) << std::endl;
	std::cout << max(-10.33333, -110.09) << std::endl;
	std::cout << max(-10.33333, -44444.0) << std::endl;
	std::cout << max('w', 'W') << std::endl;
	std::cout << max(p1, p2) << std::endl;

	std::cout << "\n-----MIN-----\n\n";
	std::cout << min(10, 20) << std::endl;
	std::cout << min(10, 10) << std::endl;
	std::cout << min(-10, -110) << std::endl;
	std::cout << min(10.4, 20.234) << std::endl;
	std::cout << min(10.22f, 10.22f) << std::endl;
	std::cout << min(-10.33333, -110.09) << std::endl;
	std::cout << min(-10.33333, -44444.0) << std::endl;
	std::cout << min('w', 'W') << std::endl;
	std::cout << min(p1, p2) << std::endl;

	std::cout << "\n-----SWAP-----\n\n";
	std::cout << "Before: " << "p1: " << *p1 << " p2: " << *p2 << std::endl;
	swap(p1, p2);
	std::cout << "After: " << "p1: " << *p1 << " p2: " << *p2 << std::endl;
	
	a = 0;
	b = -5;
	std::cout << "Before: " << "a: " << a << " b " << b << std::endl;
	swap(a, b);
	std::cout << "After: " << "a: " << a << " b " << b << std::endl;

	float f1 = 0.065f;
	float f2 = 132321.99999f;
	std::cout << "Before: " << "f1: " << f1 << " f2 " << f2 << std::endl;
	swap(f1, f2);
	std::cout << "After: " << "f1: " << f1 << " f2 " << f2 << std::endl;
}
