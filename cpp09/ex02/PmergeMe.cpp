/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:58:40 by mmoumani          #+#    #+#             */
/*   Updated: 2023/12/23 22:51:28 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

void PmergeMe::insertElement(unsigned int var) {
	vector.push_back(var);
	deque.push_back(var);
}

template<typename container>
void PmergeMe::InsertionSort(container &cnt, int begin, int end) {
	unsigned int value;
	int j;
	
	for (int i = begin + 1; i < end; i++) {
		value = cnt[i];
		j = i - 1;
		
		while (j >= begin && cnt[j] > value) {
			cnt[j + 1] = cnt[j];
			j--;
		}
		cnt[j + 1] = value;
	}
}

void PmergeMe::VectorMergeInsertionSort() {
	if (is_sorted(vector.begin(), vector.end()))
		throw std::invalid_argument("Allready sorted!!");
	std::vector<std::pair<unsigned int, unsigned int> > pairVector;
	for (std::vector<unsigned int>::iterator it = vector.begin() + 1; it != vector.end(); it++) {
		pairVector.push_back(std::make_pair(*(it - 1), *it));
		if (it + 1 != vector.end())
			it++;
	}
	std::deque<std::pair<unsigned int, unsigned int> > pairDeque;
	for (std::deque<unsigned int>::iterator it = deque.begin() + 1; it != deque.end(); it++) {
		pairDeque.push_back(std::make_pair(*(it - 1), *it));
		if (it + 1 != deque.end())
			it++;
	}
	std::cout << std::fixed;
	std::cout << "Before:  ";
	printContainer(vector);
	std::cout << std::endl;

	FordJhonsonSort(vector, pairVector, vectorSpeed);
	FordJhonsonSort(deque, pairDeque, dequeSpeed);
	std::cout << "After:   ";
	printContainer(vector);
	std::cout << std::endl;
	
	std::cout << "Time to process a range of " << vector.size() << " elements with std::vector : " << vectorSpeed << " s" << std::endl;
	std::cout << "Time to process a range of " << deque.size() << " elements with std::deque : " << dequeSpeed << " s" << std::endl;
}

template <typename C, typename P>
void PmergeMe::FordJhonsonSort(C &container, P containerPair, double &speed) {
	C		First;
	C		Second;
	clock_t	t;

	t = clock();
	// sort pairs and
	// (void)speed;
	// for (typename P::iterator it = containerPair.begin(); it < containerPair.end(); it++) {
	// 	if(it->first > it->second)
	// 		std::swap(it->first, it->second);
	// 	First.push_back(it->first);
	// 	Second.push_back(it->second);
	// }
	
	for (size_t i = 0; i < containerPair.size(); i++) {
		if(containerPair[i].first > containerPair[i].second)
			std::swap(containerPair[i].first, containerPair[i].second);
		First.push_back(containerPair[i].first);
		Second.push_back(containerPair[i].second);
	}
	
	std::sort(First.begin(), First.end());

	for (size_t i = 0; i < Second.size(); i++)
		First.insert(lower_bound(First.begin(), First.end(), Second[i]), Second[i]);
	if (container.size() % 2 != 0)
		First.insert(lower_bound(First.begin(), First.end(), container.back()), container.back());
	t = clock() - t;
	speed = ((double)t) / CLOCKS_PER_SEC;
	container = First;
}

template <typename C>
void PmergeMe::printContainer(C container) {
	for (typename C::iterator it = container.begin(); it != container.end(); it++) {
		std::cout << *it << " ";
	}
}
