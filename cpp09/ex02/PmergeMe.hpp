/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:58:43 by mmoumani          #+#    #+#             */
/*   Updated: 2023/12/23 19:25:19 by mmoumani         ###   ########.fr       */
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
		std::vector<unsigned int> vector;
		std::deque<unsigned int> deque;
		double vectorSpeed;
		double dequeSpeed;
		
	public:
		PmergeMe();
		~PmergeMe();
		
		template <typename C>
		void printContainer(C container);

		void insertElement(unsigned int var);
		void VectorMergeInsertionSort();
		template <typename container>
		void InsertionSort(container &cnt, int begin, int end);
		template <typename C, typename P>
		void FordJhonsonSort(C &container, P containerPair, double &speed);
};

#endif


