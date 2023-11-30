/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:37:15 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/25 20:32:22 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
    private :
        T *array;
        unsigned int length;
    public :
        Array();
        Array(unsigned int n);
        Array(Array &other);
        Array &operator=(const Array<T> &other);
        ~Array();

        T& operator[](int i) const;
        unsigned int size() const;
};

template <typename T>
Array<T>::Array(){
    length = 0;
    array = new T[length];
};

template <typename T>
Array<T>::Array(unsigned int n) {
    length = n;
    array = new T[n];
    for (size_t i = 0; i < n; i++)
    {   
        array[i] = 0;
    }
};

template <typename T>
Array<T>::Array(Array &other) {
    array = new T[0];
    *this = other;
};

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &other) {
    if (this == &other)
        return *this;
    if (array)
        delete[] array;
    array = new T[other.length];
    length = other.length;
    for (size_t i = 0; i < other.length; i++)
    {
        array[i] = other[i];
    }
    return *this;
}

template <typename T>
Array<T>::~Array() {
    delete[] array;
};

template <typename T>
T& Array<T>::operator[](int i) const {
    if (i < 0 || (unsigned int)i >= length)
        throw std::out_of_range("out of range");
    return array[i];
}

template <typename T>
unsigned int Array<T>::size() const {
    return length;
}

#endif