#include <iostream>
#include "YellowBook.hpp"

YellowBook::YellowBook(void) {
}

YellowBook::~YellowBook(void) {
}

std::string
	YellowBook::get_firstname(void) const {
	
	return (this->_first_name);
}

std::string
	YellowBook::get_lastname(void) const {
	
	return (this->_last_name);
}

std::string
	YellowBook::get_nickname(void) const {
	
	return (this->_nickname);
}

void
	YellowBook::print_attributes(void) const {

	std::cout << this->_first_name << std::endl;
	std::cout << this->_last_name << std::endl;
	std::cout << this->_nickname << std::endl;
	std::cout << this->_login << std::endl;
	std::cout << this->_postal_address << std::endl;
	std::cout << this->_email_address << std::endl;
	std::cout << this->_phone_number << std::endl;
	std::cout << this->_birthday_date << std::endl;
	std::cout << this->_underwear_color << std::endl;
	std::cout << this->_darkest_secret << std::endl;
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

	this->_first_name = this->new_entry("First name");
	this->_last_name = this->new_entry("Last name");
	this->_nickname = this->new_entry("Nickname");
	this->_login = this->new_entry("Login");
	this->_postal_address = this->new_entry("Postal address");
	this->_email_address = this->new_entry("Email address");
	this->_phone_number = this->new_entry("Phone number");
	this->_birthday_date = this->new_entry("Birthday date");
	this->_favorite_meal = this->new_entry("Favorite meal");
	this->_underwear_color = this->new_entry("Underwear color");
	this->_darkest_secret = this->new_entry("Darkest secret");
	return ;
}
