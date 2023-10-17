/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 22:36:54 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/14 00:30:59 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

Contact::Contact():index(0)
{
	return ;
}

Contact::~Contact()
{
	return ;
}

void Contact::setContact(int id, std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	this->index = id;
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
	std::cout << "The new contact *" << id << "* was successfully saved" << std::endl;
}

void Contact::availableContact(void)
{
	if (this->index == 0)
	{
		std::cout << "The contact not found!!" << std::endl;
		return ;
	}
	
	if (this->index == 1)
		std::cout << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|" << std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << "|" <<std::endl;

	std::cout << std::setw(10) << this->index << "|";
	if (this->first_name.length() >= 10)
		std::cout << std::setw(10) << this->first_name.substr(0, 10).replace(9, 10, ".") <<  "|";
	else
		std::cout << std::setw(10) << this->first_name <<  "|";

	if (this->last_name.length() >= 10)
		std::cout << std::setw(10) << this->last_name.substr(0, 10).replace(9, 10, ".") <<  "|";
	else
		std::cout << std::setw(10) << this->last_name <<  "|";

	if (this->nickname.length() >= 10)
		std::cout << std::setw(10) << this->nickname.substr(0, 10).replace(9, 10, ".") <<  "|" << std::endl;
	else
		std::cout << std::setw(10) << this->nickname <<  "|" << std::endl;
}

void Contact::getContact(void)
{
	if (this->index == 0)
	{
		std::cout << "The contact not found!!" << std::endl;
		return ;
	}
	std::cout << "------------------------------" << std::endl;
	std::cout << "Index : " << this->index << std::endl;
	std::cout << "First name : " << this->first_name << std::endl;
	std::cout << "Last name : " << this->last_name << std::endl;
	std::cout << "Nickname : " << this->nickname << std::endl;
	std::cout << "Phone number : " << this->phone_number << std::endl;
	std::cout << "Darkest secret : " << this->darkest_secret << std::endl;
}
