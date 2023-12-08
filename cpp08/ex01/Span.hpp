/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:40:17 by mmoumani          #+#    #+#             */
/*   Updated: 2023/12/04 18:15:28 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
	private :
		std::vector <int> span;
		unsigned int N;
	public :
		Span();
		Span(unsigned int n);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();
		
		class NotShortLong: public std::exception
		{
			public :
				const char* what() const throw();
		};
		class NoSpaceEnough: public std::exception
		{
			public :
				const char* what() const throw();
		};
		
		void addNumber(int nb);
		int shortestSpan();
		int longestSpan();
		void fillVictorSpan(const std::vector<int> &v);
};

#endif