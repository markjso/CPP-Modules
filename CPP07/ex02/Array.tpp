/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:40:30 by jmarks            #+#    #+#             */
/*   Updated: 2024/01/30 13:52:20 by jmarks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _array(nullptr), _n(0) {}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->_array = new T[n];
	this->_n = n;
}

template <typename T>
Array<T>::~Array()
{
	if (this->_array != NULL)
		delete[] this->_array;
	std::cout << "array successfully deleted" << std::endl;
}

template <typename T>
Array<T>::Array(const Array & copy)
{
	this->_n = copy._n;
	this->_array = new T[copy._n];
	for (unsigned int i = 0; i < copy._n; i++)
	{
		this->_array[i] = copy._array[i];
	}
}

template <typename T>
Array<T> &Array<T>::operator=(const Array & copy)
{
	this->_n = copy._n;
	this->_array = new T[copy._n];
	for (unsigned int i = 0; i < copy._n; i++)
	{
		this->_array[i] = copy._array[i];
	}
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index < _n)
		return (_array[index]);
	throw Array::OutOfBounds();
}

template <typename T>
unsigned int Array<T>::size(void)
{
	return (_n);
}

template <typename T>
void Array<T>::printValues() const
{
    for (unsigned int i = 0; i < _n; ++i)
    {
        std::cout << _array[i] << " ";
    }
    std::cout << std::endl;
}

template <typename T>
char const	*Array<T>::OutOfBounds::what(void) const throw()
{
	return ("Index is out of bounds");
}

#endif
