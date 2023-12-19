/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:17:27 by mmoumani          #+#    #+#             */
/*   Updated: 2023/12/19 18:42:15 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <map>
#include <sstream>
#include <utility>

class BitcoinExchange
{
	private:
		std::multimap<int, double> Data;
		int year, month, day, toDays;
	public:
		BitcoinExchange();
		BitcoinExchange(std::string fileName);
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
		~BitcoinExchange();
		
		void initBtcData(std::string fn);
		bool checkLineFormat(std::string line);
		bool checkValidDate(std::string date);
		bool checkValue(double value);
		void Exchange(std::string date, double value);

		// utils
		bool isRegFile(std::string path);
		bool printError(std::string error);
		bool isNumber(std::string str);
		int getNumOfDay(int year, int month);
};


#endif