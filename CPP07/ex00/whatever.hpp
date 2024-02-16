/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:53:38 by jmarks            #+#    #+#             */
/*   Updated: 2024/01/30 14:53:42 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T> 
void swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T> 
T& min(T& a, T& b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

template <typename T> 
T& max(T& a, T& b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

#endif
