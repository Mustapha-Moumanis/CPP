/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:02:27 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/26 11:33:53 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void printElement(T &a)
{
    std::cout << a << std::endl;
}

template <typename T, typename N>
void iter(T *a, int length, N fnc)
{
    if (a)
    {
        for (int i = 0; i < length; i++)
            fnc(a[i]);
    }
}

#endif