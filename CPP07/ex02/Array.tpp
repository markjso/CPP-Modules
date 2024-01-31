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
Array<T>::Array(void) : _array(nullptr), _length(0) {}

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
	std::cout << "array successfully deleted" << std::endl;
}

template <typename T>
Array<T>::Array(const Array & copy)
{
	_length = copy._length;
	_array = new T[copy._length];
	this->copyArray(copy._array);
}

template <typename T>
Array<T> &Array<T>::operator=(const Array & copy)
{
	_array = new T[copy._length];
	_length = copy._length;
	this->copyArray(copy._array);
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index <_length)
		return (_array[index]);
	throw Array::OutOfBounds();
}

template <typename T>
unsigned int Array<T>::size(void)
{
	return _length;
}

template <typename T>
void    Array<T>::copyArray(T *src) 
{
	for (unsigned int i = 0; i < _length; i++)
	{
		_array[i] = src[i];
	}
}

template <typename T>
void Array<T>::printValues() const
{
    for (unsigned int i = 0; i < _length; ++i)
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
