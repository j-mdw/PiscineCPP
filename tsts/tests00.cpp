#include <iostream>

int g_val = 3;

namespace foo {
	int	g_val = -1;
}

namespace bar = foo;

int main(void)
{
	char buf[64];

	std::cout << foo::g_val << std::endl << bar::g_val << std::endl;
	std::cin >> buf;
	std::cout << "You enrered: " << buf << std::endl;
}
