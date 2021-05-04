#include <iostream>

std::string & foo(void)
{
	std::string *gaga;

	gaga = new std::string;
	
	*gaga = "gagagaga!!";
	
	return (*gaga);
}

int
	main(void)
{
	int i = 10;
	int *i_p = &i;
	int &i_r = i;
	std::string *gu;

	std::cout << i << *i_p << i_r;

	gu = foo();
	std::cout << gu;
	delete gu;
}
