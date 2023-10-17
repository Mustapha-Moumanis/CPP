/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 22:49:58 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/14 00:31:18 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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