#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact	_contacts[8];
		int		_contact_count;

	public:
			PhoneBook();
			~PhoneBook();
			void	addContact();
			void	searchContact();
			void	showContacts();
};


#endif
