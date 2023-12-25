/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:58:43 by mmoumani          #+#    #+#             */
/*   Updated: 2023/12/25 17:26:36 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <sstream>
#include <vector>
#include <deque>
#include <utility>
#include <ctime>

class PmergeMe
{
	private:
		std::vector<unsigned int> arr;
		std::vector<std::pair<unsigned int, unsigned int> > pairVector;
		std::deque<std::pair<unsigned int, unsigned int> > pairDeque;
		int saved;
		double vectorSpeed;
		double dequeSpeed;
		
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);
		~PmergeMe();
		
		template <typename C>
		void printContainer(C container);
		void insertData(std::vector<unsigned int> arr);
		void Execute();
		template <typename C, typename P>
		void FordJhonsonAlgo(C &container, P containerPair, double &speed);
};

void isValid(std::string element);

#endif


