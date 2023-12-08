/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:38:21 by mmoumani          #+#    #+#             */
/*   Updated: 2023/12/08 20:26:53 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>
int main()
{
	MutantStack<int, std::vector<int> > mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int, std::vector<int> >::iterator it = mstack.begin();
	MutantStack<int, std::vector<int> >::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int, std::vector<int> > s(mstack);
	
	MutantStack<int, std::vector<int> > tmp(mstack);
	std::cout << "tmp contains : ";

	for (MutantStack<int, std::vector<int> >::const_iterator it = tmp.cbegin(); it != tmp.cend(); ++it)
		std::cout << ' ' << *it;

	std::cout << '\n';
	return 0;
}