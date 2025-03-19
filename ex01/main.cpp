#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	phonebook;
	std::string cmd;

	while (cmd != "EXIT")
	{
		std::cout << "Enter a command (ADD, SEARCH or EXIT):" << std::endl;
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			phonebook.addContact();
		}
		else if (cmd == "SEARCH")
		{
			phonebook.searchContact();
		}
		else if (cmd == "EXIT")
		{
			std::cout << "Finishing program." << std::endl;
		}
		else
		{
			std::cout << "Invalid command. Try again." << std::endl;
		}
	}
}
