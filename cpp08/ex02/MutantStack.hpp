/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:34:35 by mmoumani          #+#    #+#             */
/*   Updated: 2023/12/08 20:51:20 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template < typename T, typename container = std::deque<T> >
class MutantStack : public std::stack<T, container> {
	public :
	
		// Canonical Form
		
		MutantStack(){};
		MutantStack(const MutantStack &other):std::stack<T, container>(other){};
		MutantStack &operator=(const MutantStack &other){
			if (this == &other)
				return *this;
			this->c = other.c;
			return *this;
		};
		~MutantStack(){};

		// iterators

		typedef typename container::iterator iterator;
		typedef typename container::const_iterator const_iterator;

		iterator begin(){
			return this->c.begin();
		}
		iterator end(){
			return this->c.end();
		}

		const_iterator cbegin(){
			return this->c.cbegin();
		}
		const_iterator cend(){
			return this->c.cend();
		}
};

#endif
