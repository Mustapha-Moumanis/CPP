/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:40:17 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/30 18:50:57 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include "vector"

class Span {
    private :
        std::vector <int> span;
        unsigned int N;
        unsigned int place;
    public :
        Span();
        Span(unsigned int n);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();
        
        void addNumber(int nb);
        void fillSpan();
        int shortestSpan();
        int longestSpan();
};

#endif