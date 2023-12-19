/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:17:29 by mmoumani          #+#    #+#             */
/*   Updated: 2023/12/19 18:43:44 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string fileName) {
	initBtcData("data.csv");
	// check file
	if (!isRegFile(fileName))
		throw std::runtime_error(fileName + " is not a regular file");
	std::ifstream ifs;
	ifs.open(fileName);
	if (!ifs.is_open())
		throw std::runtime_error("Unable to open \"" + fileName + "\"");
	
	// Get line
	std::string line;
	std::string date;
	double value;
	std::getline(ifs, line);
	// check first line
	if (line != "date | value") {
		ifs.close();
		throw std::runtime_error("Data must be \"date | value\"");
	}
	while (std::getline(ifs, line)) {
		// check valid line format
		if (checkLineFormat(line))
			continue;

		// check date
		date = line.substr(0, line.find(' '));
		if (checkValidDate(date)) {
			printError("bad date => " + date);
			continue;
		}
		if (toDays < Data.begin()->first) {
			printError("Date to low => " + date);
			continue;
		}

		// value to double
		std::stringstream ss(line.substr(13));
		ss >> value;

		// check value
		if (checkValue(value))
			continue;

		// Exchange
		Exchange(date, value);
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other){
	*this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
    if (this == &other)
        return *this;
	Data = other.Data;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::initBtcData(std::string fileName) {
	std::ifstream ifs;
	std::string line;
	if (!isRegFile(fileName))
		throw std::runtime_error(fileName + " is not a regular file");
	ifs.open(fileName);
	if (!ifs.is_open())
		throw std::runtime_error("Unable to open \"" + fileName + "\"");
	std::getline(ifs, line);
	// check first line
	if (line != "date,exchange_rate") {
		ifs.close();
		throw std::runtime_error("Data must be \"date,exchange_rate\"");
	}
	while (std::getline(ifs, line)) {
		std::stringstream check(line);
		std::string date;
		std::string value;
		
		// splite line
		getline(check, date, ',');
		getline(check, value, '\0');
		
		// value to double
		std::stringstream ss(value);
		double dValue;
		ss >> dValue;
		
		// check line
		if (checkValidDate(date) || value.empty() || !isNumber(value) || dValue < 0) {
			ifs.close();
			throw std::runtime_error("you have a problem in btc data");
		}
		Data.insert(std::pair<double, double>(toDays, dValue));
	}
	if (Data.empty()) {
		ifs.close();
		throw std::runtime_error(fileName + " file is empty.");
	}
	ifs.close();

	for (std::map<int, double>::iterator i = Data.begin(); i != Data.end(); i++)
		std::cout << i->first << " => " << i->second << std::endl;
}

bool BitcoinExchange::checkLineFormat(std::string line) {
	if (line.empty())
		return printError("Empty input" + line);
	if (line.size() < 14)
		return printError("bad input => " + line);
	std::string date = line.substr(0, 10);
	std::string siparator =  line.substr(10, 3);
	std::string value = line.substr(13);
	if (date.size() != 10 || siparator != " | " || !isNumber(value))
		return printError("bad input => " + line);
	return false;
}

bool BitcoinExchange::checkValidDate(std::string date) {

	std::istringstream ss(date);
	std::string sYear;
	std::string sMonth;
	std::string sDay;
	getline(ss, sYear, '-');
	getline(ss, sMonth, '-');
	ss >> sDay;
	
	std::stringstream ss2(date);
	ss2 >> year >> month >> day;
	month *= (-1);
	day *= (-1);
	toDays = year * 365 + month * 30.4167 + day;

	// check if digit and good length
	if (!isNumber(sYear) || !isNumber(sMonth) || !isNumber(sDay)
		|| sYear.size() != 4 || sMonth.size() != 2 || sDay.size() != 2)
		return true;
	// check year
	if (year < 1)
		return true;
	// check month
	if (month < 1 || month > 12)
		return true;
	// check day
	int numOfDays = getNumOfDay(year, month);
	if (day < 1 || day > numOfDays)
		return true;
	return false;
}

bool BitcoinExchange::checkValue(double value) {
	if (value < 0)
		return printError("not a positive number.");
	if (value > 1000)
		return printError("too large a number.");
    return false;
}

void BitcoinExchange::Exchange(std::string date, double value) {
	std::multimap<int, double>::iterator it = Data.find(toDays);
	if (it == Data.end()) {
		it = Data.upper_bound(toDays);
		if (it != Data.begin())
			it--;
	}
	std::cout << date << " => " << value << " = " << it->second * value << std::endl;
}

// utils

bool BitcoinExchange::printError(std::string error) {
	std::cout << "Error: " << error << std::endl;
    return true;
}

bool BitcoinExchange::isRegFile(std::string path) {
	struct stat s;

	if (stat(path.c_str(), &s) != 0)
		return 0;
	return S_ISREG(s.st_mode);
}

bool BitcoinExchange::isNumber(std::string str) {
	if(str.empty())
		return false;
	
	std::string::iterator it = str.begin();
	
	if (*it == '+' || *it == '-')
		it++;
 
	bool isDigit = false, Point = false;
	while (it < str.end()) {
		if (std::isdigit(*it))
			isDigit = true;
		else if (*it == '.' && !Point)
			Point = true;
		else
			return false;
		it++;
	}
	return isDigit;
}

int BitcoinExchange::getNumOfDay(int year, int month) {
	if (month == 4 || month == 6 || month == 9 || month == 11)
		return 30;
	if (month == 2) {
		if ((year % 4 == 0) || (year % 400 == 0))
			return 29;
		return 28;
	}
	return 31;
}