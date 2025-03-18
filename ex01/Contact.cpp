#include "Contact.hpp"

Contact::Contact(){}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname,std::string darkest_secret, std::string phone_number)
{
	_first_name = first_name;
	_last_name = last_name;
	_nickname = nickname;
	_darkest_secret = darkest_secret;
	_phone_number = phone_number;
}

Contact::~Contact(){}


