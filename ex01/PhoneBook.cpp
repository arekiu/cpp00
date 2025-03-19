#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_contact_count = 0;
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}


void	PhoneBook::addContact(void)
{
	static int	i = 0;
	std::string	first_name, last_name, nickname, phone_number, darkest_secret;

	std::cout << "First name: " << std::endl;
	while (std::getline(std::cin, first_name) && first_name.empty())
		std::cout << "First name cannot be empty. Try again:" << std::endl;

	std::cout << "Last name: " << std::endl;
	while (std::getline(std::cin, last_name) && last_name.empty())
		std::cout << "Last name cannot be empty. Try again:" << std::endl;

	std::cout << "Nickname: " << std::endl;
	while (std::getline(std::cin, nickname) && nickname.empty())
		std::cout << "Nickname cannot be empty. Try again:" << std::endl;

	std::cout << "Phone number: " << std::endl;
	while (std::getline(std::cin, phone_number) && phone_number.empty())
		std::cout << "Phone number cannot be empty. Try again:" << std::endl;

	std::cout << "Darkest secret: " << std::endl;
	while (std::getline(std::cin, darkest_secret) && darkest_secret.empty())
		std::cout << "Darkest secret cannot be empty. Try again:" << std::endl;

	Contact contact(first_name, last_name, nickname, darkest_secret, phone_number);
	this->_contacts[i] = contact;
	i++;
	if (i >= 8)
		i = 0;

	if (this->_contact_count < 8)
		this->_contact_count++;
}

void	PhoneBook::showContacts(void)
{
	if (this->_contact_count == 0)
	{
		std::cout << "No contacts available." << std::endl;
		return;
	}

	std::cout << std::setw(10) << std::right << "Index" << "|";
	std::cout << std::setw(10) << std::right << "First name" << "|";
	std::cout << std::setw(10) << std::right << "Last name" << "|";
	std::cout << std::setw(10) << std::right << "Nickname" << std::endl;

	for (int i = 0; i < this->_contact_count; i++)
	{
		std::cout << std::setw(10) << std::right << i+1 << "|";
		this->_contacts[i].displayResume();
	}
}

void	PhoneBook::searchContact(void)
{
	std::string input;
	int	index;

	this->showContacts();
	if (this->_contact_count == 0)
	{
		std::cout << "No contacts to search." << std::endl;
		return;
	}
	std::cout << "Select index of contact to see: " << std::endl;

	std::getline(std::cin, input);

	std::stringstream ss(input); //convert str to int
	if (!(ss >> index) || index < 1 || index > this->_contact_count)
	{
		std::cout << "Invalid index." << std::endl;
		return;
	}

	this->_contacts[index - 1].displayInfo();
}
