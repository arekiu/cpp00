#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){}

PhoneBook::~PhoneBook(){}

void	PhoneBook::addContact(void)
{
	static int	i;
	std::string	first_name, last_name, nickname, phone_number, darkest_secret;

	std::cout << "First name:" << std::endl;
	while (std::getline(std::cin, first_name) && first_name.empty())
		std::cout << "First name cannot be empty. Try again:" << std::endl;

	std::cout << "Last name:" << std::endl;
	while (std::getline(std::cin, last_name) && last_name.empty())
		std::cout << "Last name cannot be empty. Try again:" << std::endl;

	std::cout << "Nickname:" << std::endl;
	while (std::getline(std::cin, nickname) && nickname.empty())
		std::cout << "Nickname cannot be empty. Try again:" << std::endl;

	std::cout << "Phone number:" << std::endl;
	while (std::getline(std::cin, phone_number) && phone_number.empty())
		std::cout << "Phone number cannot be empty. Try again:" << std::endl;

	std::cout << "Darkest secret:" << std::endl;
	while (std::getline(std::cin, darkest_secret) && darkest_secret.empty())
		std::cout << "Darkest secret cannot be empty. Try again:" << std::endl;

	Contact contact(first_name, last_name, nickname, darkest_secret, phone_number);
	this->_contacts[i] = contact;
	i++;
	if (i >= 8)
		i = 0;
}
