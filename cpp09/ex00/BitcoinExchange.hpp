/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:17:27 by mmoumani          #+#    #+#             */
/*   Updated: 2023/12/16 16:45:10 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <map>
#include <sstream>
// #include <string>

class BitcoinExchange
{
	private:
		std::multimap<std::string, double> Data;
		int year, month, day;
		double lowDays;
	public:
		BitcoinExchange();
		BitcoinExchange(std::string fileName);
		~BitcoinExchange();
		
		void initBtcData(std::string fn);
		bool checkLineFormat(std::string line);
		bool checkDate(std::string date, std::string line);
		// void checkFirstLine(std::string line);

		// utils
		bool isRegFile(std::string path);
		bool printError(std::string error);
		std::string trim(std::string &str, const char *remove);
		bool isNumber(const std::string& str);
};


#endif