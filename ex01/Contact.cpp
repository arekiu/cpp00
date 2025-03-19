#include "Contact.hpp"

Contact::Contact()
{
	return ;
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname,std::string darkest_secret, std::string phone_number)
{
	_first_name = first_name;
	_last_name = last_name;
	_nickname = nickname;
	_darkest_secret = darkest_secret;
	_phone_number = phone_number;
}

Contact::~Contact()
{
	return ;
}

void	Contact::displayResume(void)
{
	std::string	first_name = this->_first_name;
	std::string	last_name = this->_last_name;
	std::string	nickname = this->_nickname;

	if (first_name.length() > 10)
		first_name = first_name.substr(0, 9) + ".";
	if (last_name.length() > 10)
		last_name = last_name.substr(0, 9) + ".";
	if (nickname.length() > 10)
		nickname = nickname.substr(0, 9) + ".";

	std::cout << std::setw(10) << std::right << first_name << "|";
	std::cout << std::setw(10) << std::right << last_name << "|";
	std::cout << std::setw(10) << std::right << nickname << std::endl;
}

void	Contact::displayInfo(void)
{
	std::cout << "First name: " << this->_first_name << std::endl;
	std::cout << "Last name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Telephone number: " << this->_phone_number << std::endl;
	std::cout << "Darkest secret: " << this->_darkest_secret << std::endl;
}


