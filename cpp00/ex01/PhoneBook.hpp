#include "Contact.hpp"
#include <iomanip>
#include <sstream>
#include <cstdlib>

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook 
{
	private :
		Contact 		table[8];
		int				id;
		int				len;
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		phone_number;
		std::string		darkest_secret;


	public :
		PhoneBook();
		~PhoneBook();

		std::string get_val(std::string str);
		void Add();
		void Search();
};
#endif