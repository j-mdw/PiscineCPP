#include "sample.class.hpp"
#include <iostream>

/*void
	f1(void)
	{
		Sample instance(2);
		Sample::printcount();
}*/
void
	f0(void)
	{
		Sample instance(1);
		instance.printcount();

		//f1();
//		Sample::printcount();
}



int main(void)
{
	Sample instance(-13);
	Sample instance2(99);
	int		Sample::*p = NULL; 
	int		*h = &instance.j;
	void	(Sample::*f)(void);

	f = &Sample::printcount;
	std::cout << "Pointeur j:" << (long long int)h << std::endl;
	//instance.pprint();
	std::cout << instance.i << std::endl;
	std::cout << instance.j << std::endl;
	
	std::cout << "Pointeur p:" << p << std::endl;
	p = &Sample::j;
	std::cout << "Pointeur p:" << p << std::endl;
	instance.*p = -133;
	std::cout << instance.j << std::endl;

	int k;

	k = instance.getk();
	std::cout << "k = " << k << std::endl;
	instance.setk(10);
	k = instance.getk();
	std::cout << "k = " << k << std::endl;
	instance.setk(-10);
	k = instance.getk();
	std::cout << "k = " << k << std::endl;

	instance.printcount();
	//Sample::printcount();
	f0();
	(instance.*f)();	
	instance.printcount();
	//Sample::printcount();
	
	return (0);
}
