#include <iostream>
#include <string>
#include <iomanip>
#include "YellowBook.hpp"

void
	set_sub(std::string *origine, std::string *sub) {
	
	if (origine->size() <= 10)
		*sub = *origine;
	else
		*sub = origine->substr(0, 9) + '.';
}

void
	search_list(YellowBook *arr, int len)
{
	int i;
	std::string sub;

	i = 0;
	std::cout << '|' << std::setw(11) << "Index|";
	std::cout << std::setw(11) << "First name|";
	std::cout << std::setw(11) << "Last name|";
	std::cout << std::setw(11) << "Nickname|" << std::endl;
	while (i < len)
	{

		std::cout << '|' << std::setw(10) << i + 1 << '|';
		set_sub(&arr[i].first_name, &sub);
		std::cout << std::setw(10) << sub << '|';
		set_sub(&arr[i].last_name, &sub);
		std::cout << std::setw(10) << sub << '|';
		set_sub(&arr[i].nickname, &sub);
		std::cout << std::setw(10) << sub << '|';
		std::cout << std::endl;
		i++;
	}
}

int
	get_search_index(int len)
{
	std::string contact_s;
	int			contact_i;

	while (1)
	{
		std::cout << "Enter contact index" << std::endl;
		std::getline(std::cin, contact_s, '\n');
		contact_i = std::atoi(contact_s.c_str());
		if (contact_i <= len && contact_i > 0)
			return (contact_i - 1);
		std::cout << "Index not in range [1;" << len << ']' << std::endl;

	}
}

int
	main(void)
{
	YellowBook	instances[8];
	std::string input;
	int			i;

	std::cout << "What do you want to do, ADD, SEARCH, EXIT?" << std::endl;
	i = 0;
	while (1)
	{
		std::getline(std::cin, input, '\n');
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
		{
			if (i == 8)
				std::cout << "Too bad, the book is already full" << std::endl;
			else
			{
				instances[i].new_contact();
				i++;
			}
		}
		else if (input == "SEARCH")
		{
			if (i == 0)
				std::cout << "Yellow pages are empty, add a contact first" << std::endl;
			else
			{
				search_list(instances, i);
				instances[get_search_index(i)].print_attributes();
			}
		}
		else
			std::cout << "Wrong input: options are ADD, SEARCH, EXIT" << std::endl;
	}
	return (0);
}
