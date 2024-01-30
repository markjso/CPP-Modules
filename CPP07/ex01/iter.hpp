/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:16:37 by jmarks            #+#    #+#             */
/*   Updated: 2024/01/30 15:16:46 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T> void iter(T *array, int length, void(*f)(T const &))
{
	for (int i = 0; i < length; i++)
	{
		f(array[i]);
	}
}

template <typename T> void print(T const &x)
{
	std::cout << x;
}

#endif