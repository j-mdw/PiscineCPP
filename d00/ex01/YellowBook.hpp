#ifndef YELLOW_BOOK_H
# define YELLOW_BOOK_H

class YellowBook {

public:

	YellowBook(void);
	~YellowBook(void);

	void		print_attributes(void) const;
	void		new_contact(void);
	std::string new_entry(const char *field_name) const;

	std::string get_firstname(void) const;
	std::string get_lastname(void) const;
	std::string get_nickname(void) const;

private:

	std::string	_last_name;
	std::string _first_name;
	std::string _nickname;
	std::string _login;
	std::string _postal_address;
	std::string _email_address;
	std::string _phone_number;
	std::string _birthday_date;
	std::string _favorite_meal;
	std::string _underwear_color;
	std::string	_darkest_secret;

};

#endif
