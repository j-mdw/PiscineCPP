#include <iostream>
#include "YellowBook.hpp"

YellowBook::YellowBook(void) {
}

YellowBook::~YellowBook(void) {
}

std::string
	YellowBook::get_darksecret(void) const {
	
	return (this->_darkest_secret);
}

void
	YellowBook::set_darksecret(std::string s) {
	
	this->_darkest_secret = s;
	return ;
}


void
	YellowBook::print_attributes(void) const {

	std::cout << this->first_name << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->login << std::endl;
	std::cout << this->postal_address << std::endl;
	std::cout << this->email_address << std::endl;
	std::cout << this->phone_number << std::endl;
	std::cout << this->birthday_date << std::endl;
	std::cout << this->underwear_color << std::endl;
	std::cout << this->get_darksecret() << std::endl;
}


std::string
	YellowBook::new_entry(const char *field_name) const {

	std::string field;

	std::cout << field_name << ": ";
	getline(std::cin, field, '\n');
	return (field);
}


void
	YellowBook::new_contact(void) {

	this->first_name = this->new_entry("First name");
	this->last_name = this->new_entry("Last name");
	this->nickname = this->new_entry("Nickname");
	this->login = this->new_entry("Login");
	this->postal_address = this->new_entry("Postal address");
	this->email_address = this->new_entry("Email address");
	this->phone_number = this->new_entry("Phone number");
	this->birthday_date = this->new_entry("Birthday date");
	this->favorite_meal = this->new_entry("Favorite meal");
	this->underwear_color = this->new_entry("Underwear color");
	this->set_darksecret(this->new_entry("Darkest secret"));
	return ;
}
