/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:45:49 by jmarks            #+#    #+#             */
/*   Updated: 2024/01/30 15:45:51 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
	T			*_array;
	unsigned int _length;
	void    copyArray(T *src);

	public:
	Array(void);
	Array(unsigned int n);
	~Array(void);
	Array(const Array & copy);
	Array<T> &operator=(const Array & copy);
	T &operator[](unsigned int index);
	void printValues() const;
	unsigned int size(void);
	class OutOfBounds: public std::exception 
	{
	public:
		const char* what(void) const throw();
	};
};

#include "Array.tpp"

#endif
