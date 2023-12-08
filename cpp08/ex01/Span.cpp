/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:40:25 by mmoumani          #+#    #+#             */
/*   Updated: 2023/12/04 18:14:54 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():N(0){}

Span::Span(unsigned int n): N(n){}

Span::Span(const Span &other){
    *this = other;
}

Span &Span::operator=(const Span &other) {
    if (this == &other)
        return *this;
    span = other.span;
    N = other.N;
    return *this;
}

Span::~Span(){}

const char* Span::NotShortLong::what() const throw() {
    return "No span can be found";
}

const char *Span::NoSpaceEnough::what() const throw() {
    return "No Space Enough!!";
}

int Span::shortestSpan()
{
    if (span.size() <= 1)
        throw NotShortLong();
    std::vector<int> tmp = span;
    int result = *tmp.begin();
    int n = 0;
    std::sort(tmp.begin(), tmp.end());
    std::reverse(tmp.begin(), tmp.end());
    for (std::vector<int>::iterator i = tmp.begin(); i < tmp.end() - 1; i++)
    {
        n = *i - *(i + 1);
        if (n < result)
            result = n;
    }
    return result;
}

int Span::longestSpan()
{
    if (span.size() <= 1)
        throw NotShortLong();
    int min = *std::min_element(span.begin(), span.end());
    int max = *std::max_element(span.begin(), span.end());
    return max - min;
}

void Span::addNumber(int nb) {
    if (N == span.size())
        throw NoSpaceEnough();
    span.push_back(nb);
}

void Span::fillVictorSpan(const std::vector<int> &v) {
    if (v.size() > N - span.size())
        throw NoSpaceEnough();
	span.insert(span.end(), v.begin(), v.end());
}
