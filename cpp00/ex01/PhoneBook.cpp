/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:37:05 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/13 04:06:38 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook():id(0), len(0)
{
	std::cout << "Let's get it started" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "The program has ended" << std::endl;
}

bool	isAlldigit(std::string str) {
    for (std::string::size_type i = 0; i < str.length(); ++i) {
        if (!isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

std::string	PhoneBook::get_val(std::string str)
{
	std::string field;

	while (1)
	{
		std::cout << str << std::endl;
		std::getline(std::cin, field);

		if (std::cin.eof())
			exit (0);

		if (field.empty())
			std::cout << "Error : There are empty field" << std::endl;
		else if (str == "Phone number: " && !isAlldigit(field))
			std::cout << "Error : this field must be digit" << std::endl;
		else
			return field;
	}
}

void PhoneBook::Add()
{
	this->first_name = get_val("First name: ");
	this->last_name = get_val("Last name: ");
	this->nickname = get_val("Nickname: ");
	this->phone_number = get_val("Phone number: ");
	this->darkest_secret = get_val("Darkest secret: ");

	if (this->len < 8)
		this->len++;
	this->id %= 8;
	
	this->table[this->id].setContact(this->id + 1, this->first_name, this->last_name, this->nickname, this->phone_number, this->darkest_secret);
	this->id++;
}

void PhoneBook::Search()
{
	std::string enter;
	int index;

	if (!this->len)
	{
		std::cout << "There are no contacts in your phonebook" << std::endl;
		return ;
	}
	
	for (int i = 0; i < this->len; i++)
		this->table[i].availableContact();

	while (1)
	{
		std::cout << "Enter the index: " << std::endl;
		std::getline(std::cin, enter);
		if (std::cin.eof())
			return ;
		if (enter.length() == 1 && enter.find_first_not_of("12345678"))
		{
			index = enter[0] - '0';
			this->table[index - 1].getContact();
			break ;
		}
		else
			std::cout << "Error : The index that is either incorrect" << std::endl;
	}
}
