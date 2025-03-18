#ifndef CONTACT_HPP

# define CONTACT_HPP

#include <iostream>

class	Contact
{
	private:
			std::string	_first_name;
			std::string	_last_name;
			std::string	_nickname;
			std::string	_darkest_secret;
			std::string	_phone_number;
	public:
			Contact();
			Contact(std::string first_name, std::string last_name, std::string nickname,std::string darkest_secret, std::string phone_number);
			~Contact();
			void displayResume(void);
			void displayInfo(void);

};


#endif
