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
Array<T>::Array(void) : _array(new T[0]), _length(0) {}

template <typename T>
Array<T>::Array(unsigned int n)
{
	_array = new T[n];
	_length = n;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template <typename T>
Array<T>::Array(const Array & copy)
{
	this->_length = copy._length;
	_array = new T(_length);
	for (unsigned int i = 0; i < _length; ++i)
	{
		this->_array[i] = copy._array[i];
	}
}

template <typename T>
Array<T> &Array<T>::operator=(const Array & copy)
{
	_array = new T[copy._length];
	_length = copy._length;
	for (unsigned int i = 0; i < _length; ++i)
	{
		this->_array[i] = copy._array[i];
	}
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index <_length)
		return (_array(index));
	throw Array::OutOfBounds();
}

template <typename T>
unsigned int Array<T>::size(void)
{
	return _length;
}

template <typename T>
char const	*Array<T>::OutOfBounds::what(void) const throw()
{
	return ("Index is out of bounds");
}

#endif
