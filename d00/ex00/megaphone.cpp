#include <iostream>


void
	print_full_caps(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	std::cout << s;
}

int
	main(int ac, char **av)
{
	int i;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (i < ac)
		{
			print_full_caps(av[i]);
			if (i == ac - 1)
				std::cout << std::endl;
			i++;
		}
	}
	return (0);
}
