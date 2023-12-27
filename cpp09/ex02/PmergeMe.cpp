/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:58:40 by mmoumani          #+#    #+#             */
/*   Updated: 2023/12/26 20:32:59 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : saved(-1) {}

PmergeMe::PmergeMe(const PmergeMe &other) {
	*this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other) {
    if (this == &other)
		return *this;
	saved = other.saved;
	arr = other.arr;
	pairVector = other.pairVector;
	pairDeque = other.pairDeque;
	return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::insertData(std::vector<unsigned int> arr) {
	unsigned int i = 1;
	this->arr = arr;
	while (i < arr.size()) {
		pairVector.push_back(std::make_pair(arr[i - 1], arr[i]));
		pairDeque.push_back(std::make_pair(arr[i - 1], arr[i]));
		i += 2;
	}
	
	if (arr.size() % 2 != 0)
		saved = arr[arr.size() - 1];
} 

template <typename C, typename P>
void PmergeMe::FordJhonsonAlgo(C &First, P containerPair, double &speed) {
	C		Second;
	clock_t	t;

	t = clock();

	for (size_t i = 0; i < containerPair.size(); i++) {
		if(containerPair[i].first > containerPair[i].second)
			std::swap(containerPair[i].first, containerPair[i].second);
	}

	for (size_t i = 0; i < containerPair.size(); i++)
		First.push_back(containerPair[i].first);
	for (size_t i = 0; i < containerPair.size(); i++)
		Second.push_back(containerPair[i].second);

	std::sort(First.begin(), First.end());

	for (size_t i = 0; i < Second.size(); i++)
		First.insert(lower_bound(First.begin(), First.end(), Second[i]), Second[i]);
	if (saved != -1)
		First.insert(lower_bound(First.begin(), First.end(), saved), saved);

	t = clock() - t;
	speed = ((double)t) / CLOCKS_PER_SEC;
}

void PmergeMe::Execute() {
	std::vector<unsigned int> vector;
	std::deque<unsigned int> deque;
	FordJhonsonAlgo(vector, pairVector, vectorSpeed);
	FordJhonsonAlgo(deque, pairDeque, dequeSpeed);
	std::cout << std::fixed;
	std::cout << "Before:  ";
	printContainer(arr);
	std::cout << std::endl;
	std::cout << "After:   ";
	printContainer(deque);
	std::cout << std::endl;
	
	std::cout << "Time to process a range of " << vector.size() << " elements with std::vector : " << vectorSpeed << " s" << std::endl;
	std::cout << "Time to process a range of " << deque.size() << " elements with std::deque : " << dequeSpeed << " s" << std::endl;
}

template <typename C>
void PmergeMe::printContainer(C container) {
	for (typename C::iterator it = container.begin(); it != container.end(); it++) {
		std::cout << *it << " ";
	}
}

void isValid(std::string element) {
	if (element.empty() || (element.find_first_not_of("0123456789") != std::string::npos))
		throw std::invalid_argument("Error");
}