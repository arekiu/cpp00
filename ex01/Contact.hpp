#ifndef CONTACT_HPP

# define CONTACT_HPP

#include <iostream>

class	Contact
{
	private:
			std::string	first_name;
			std::string	last_name;
			std::string	nickname;
			std::string	darkest_secret;
			int	phone_number;
			int	index;
	public:
			Contact();
			~Contact();
};


#endif
