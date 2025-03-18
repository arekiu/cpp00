#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact	_contacts[8];

	public:
			PhoneBook();
			~PhoneBook();
			void	addContact();
			void	searchContact();
			void	printContact();
};


#endif
