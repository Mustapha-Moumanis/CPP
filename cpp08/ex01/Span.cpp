/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:40:25 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/30 19:36:56 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():N(0),place(0){}

Span::Span(unsigned int n): N(n), place(0){
    std::vector<int>v(n);
    span = v;
}

Span::Span(const Span &other){
    *this = other;
}

Span &Span::operator=(const Span &other) {
    if (this == &other)
        return *this;
    span = other.span;
    N = other.N;
    place = other.place;
    return *this;
}

void Span::addNumber(int nb) {
    if (place == N)
        throw std::invalid_argument("you can't store anything.");
    span[place++] = nb;
    sort(span.begin(), span.end());
    reverse(span.begin(), span.end());
}

void Span::fillSpan() {
    unsigned int j = 0;
    for (std::vector<int>::iterator i = span.begin(); i < span.end(); i++)
    {
        if (j++ < place)
            continue;
        *i = (rand() / j++) % 10000;
    }
    place = N;
    sort(span.begin(), span.end());
    reverse(span.begin(), span.end());
}

Span::~Span(){}

int Span::shortestSpan()
{
    if (place <= 1)
        throw std::runtime_error("no span can be found.");
    return 0;
}

int Span::longestSpan()
{
    if (place <= 1)
        throw std::runtime_error("no span can be found.");
    return span[0] - span[place - 1];
}
