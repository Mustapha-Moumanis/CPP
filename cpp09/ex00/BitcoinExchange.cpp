/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:17:29 by mmoumani          #+#    #+#             */
/*   Updated: 2023/12/16 16:51:10 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	std::cout << "open here" << std::endl;
}

BitcoinExchange::BitcoinExchange(std::string fileName)
{
	initBtcData("data.csv");
	// check file
	if (!isRegFile(fileName))
		throw std::runtime_error(fileName + " is not a regular file");
	
	std::ifstream ifs;
	ifs.open(fileName);
	if (!ifs.is_open())
		throw std::runtime_error("Unable to open \"" + fileName + "\"");
	
	// get line
	std::string line;
	std::string date;
	
	// check first line
	while (std::getline(ifs, line))
	{
		trim(line, " \t\v\n\f\r");
		if (line.empty())
			continue;

		if (line != "date | value")
		{
			ifs.close();
			throw std::runtime_error("Data must be \"date | value\"");
		}
		break;
	}
	while (std::getline(ifs, line))
	{
		// trim(line, " \t\v\n\f\r");
		
		// check valid line format
		if (checkLineFormat(line))
			continue;
		
		// check date
		date = line.substr(0, line.find(' '));
		if (checkDate(date, line))
			continue;
		std::cout << line << std::endl;
	}
	
	
	
	// std::string line;
	// std::string date;
		
	// int i = 0;
	// while (std::getline(ifs, line))
	// {
	// 	trim(line, " \t\v\n\f\r");
	// 	if (line.empty())
	// 		continue;

	// 	// check first line
	// 	if (i == 0)
	// 	{
	// 		// checkFirstLine(line);
	// 		if (line != "date | value")
	// 		{
	// 			ifs.close();
	// 			throw std::runtime_error("Data must be \"date | value\"");
	// 		}
	// 		i++;
	// 		continue;
	// 	}
	// 	// check valid line format
	// 	if (checkLineFormat(line))
	// 		continue;
	// 	// check date
	// 	date = line.substr(0, line.find('|'));
	// 	trim(date, " \t\v\n\f\r");
	// 	if (checkDate(date, line))
	// 		continue;

	// // 	// ourData.insert(std::make_pair(date , value));
	// }
	// // for (std::map<std::string, std::string>::iterator i = ourData.begin(); i != ourData.end(); i++)
	// // 	std::cout << i->first << " => " << i->second << std::endl;
}

BitcoinExchange::~BitcoinExchange() {
	// std::cout << "distractor" << std::endl;
	// ifs.close();
}

void BitcoinExchange::	initBtcData(std::string fileName) {
	std::ifstream ifs;
	std::string line;
	if (!isRegFile(fileName))
		throw std::runtime_error(fileName + " is not a regular file");
	ifs.open(fileName);
	if (!ifs.is_open())
		throw std::runtime_error("Unable to open \"" + fileName + "\"");
	std::getline(ifs, line);
	// check first line
	if (line != "date,exchange_rate")
	{
		ifs.close();
		throw std::runtime_error("Data must be \"date,exchange_rate\"");
	}
	
	while (std::getline(ifs, line))
	{
		// check line
		std::stringstream check(line);
		std::string date;
		std::string value;
		getline(check, date, ',');
		getline(check, value, '\0');
		if (date.empty() || date.size() != 10 || value.empty() || !isNumber(value))
		{
			ifs.close();
			throw std::runtime_error("you have a problem in btc data");
		}
		// save to Data
		Data.insert(std::make_pair(date ,stod(value)));
	}
	std::istringstream iss2((Data.begin())->first);
	iss2 >> this->year >> this->month >> this->day;
	this->month *= (-1);
	this->day *= (-1);
	this->lowDays = this->year / 365 + this->month / 30 + this->day;
	
	// for (std::map<std::string, double>::iterator i = Data.begin(); i != Data.end(); i++)
	// 	std::cout << i->first << " => " << i->second << std::endl;
}

bool BitcoinExchange::printError(std::string error)
{
	std::cerr << "Error: " << error << std::endl;
    return true;
}

// void BitcoinExchange::checkFirstLine(std::string line)
// {
	// std::string date;
	// std::string value;
	// date = line.substr(0, line.find('|'));
	// if (date != line)
	// {
	// 	value = line.substr(date.size() + 1, line.size());
	// 	trim(date, " \t\v\n\f\r");
	// 	trim(value, " \t\v\n\f\r");
	// 	if (date == "date" && value == "value")
	// 		return ;
	// }
	// ifs.close();
	// throw std::runtime_error("Data must be \"date | value\"");
// }

bool BitcoinExchange::checkLineFormat(std::string line)
{
	// std::cout << "line :" << line << std::endl;
	if (line.empty())
		return 1;
	if (line.size() < 14)
		return printError("bad input => " + line);
	std::string date = line.substr(0, 10);
	std::string siparator =  line.substr(10, 3);
	std::string value = line.substr(13);
	if (date.size() != 10 || siparator != " | " || !isNumber(value))
		return printError("bad input => " + date);
	return false;
}

bool BitcoinExchange::checkDate(std::string date, std::string line) {
	int year, month, day;
	std::istringstream iss(date);
	iss >> year >> month >> day;
	month *= (-1);
	day *= (-1);
	
	if (date == line)
		return printError("bad input => " + date);

	// check month
	// std::cout << month << std::endl;
	if (month > 12 || month < 1)
		return printError("bad input => " + date);
	
	// check day
	// std::cout << day << std::endl;
	if (day > 30 || day < 1)
		return printError("bad input => " + date);
	
	if ((year / 365 + month / 30 + day) < this->lowDays)
	{
		std::cout << this->year << " " << this->month << " " << this->day << std::endl;
		return printError("bad input => " + date);
	}
	return false;
}

// utils

bool BitcoinExchange::isRegFile(std::string path)
{
	struct stat s;

	if (stat(path.c_str(), &s) != 0)
		return 0;
	return S_ISREG(s.st_mode);
}

std::string BitcoinExchange::trim(std::string &str, const char *remove) {
	str.erase(0, str.find_first_not_of(remove));
	str.erase(str.find_last_not_of(remove) + 1);
	return str;
}

bool BitcoinExchange::isNumber(const std::string& str) {
	size_t i = 0;

	if(str.empty())
		return false;
	if (str[0] == '+' || str[0] == '-')
		i = 1;
 
	bool hasDigits = false, hasDecimalPoint = false;
	for (; i < str.size(); ++i) {
		if (std::isdigit(str[i])) {
			hasDigits = true;
		} else if (str[i] == '.' && !hasDecimalPoint) {
			hasDecimalPoint = true;
		} else {
			return false;
		}
	}
	return hasDigits;
}

