/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:38:52 by mmoumani          #+#    #+#             */
/*   Updated: 2023/12/05 12:44:11 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void easyfind(T array, int nb)
{
    if (std::find(array.begin(), array.end(), nb) == array.end())
        throw std::out_of_range("No occurrence is found");
    std::cout << "The first occurrence " << nb << " finded" << std::endl;
}
