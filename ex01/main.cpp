#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	phonebook;
	std::string cmd;

	while (cmd != "EXIT")
	{
		std::cout << "Enter a command:";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			std::cout << "Adding contact\n";
		}
		else if (cmd == "SEARCH")
		{
			std::cout << "Show contacts\n";
		}
		else if (cmd == "EXIT")
		{
			std::cout << "Finishing program.\n";
		}
		else
		{
			std::cout << "Invalid command. Try again.\n" ;
		}
	}
}
