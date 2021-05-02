#ifndef YELLOW_BOOK_H
# define YELLOW_BOOK_H

class YellowBook {

public:

	YellowBook(void);
	~YellowBook(void);
	
	std::string	last_name;
	std::string first_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;

	std::string	get_darksecret(void) const;
	void		set_darksecret(std::string s);

	void		print_attributes(void) const;
	void		new_contact(void);
	std::string new_entry(const char *field_name) const;

private:

	std::string	_darkest_secret;

};

#endif
