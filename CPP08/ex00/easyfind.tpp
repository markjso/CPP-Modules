/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:40:30 by jmarks            #+#    #+#             */
/*   Updated: 2024/02/05 13:52:20 by jmarks          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

# include "easyfind.hpp"

template<typename T>
void  easyfind(T a, int b)
{
	typename T::iterator it = std::find(a.begin(), a.end(), b);
	if (it == a.end())
	{
		throw noOccurrence();
		return ;
	}
	std::cout << "Number " << b << " found in array" << std::endl;
}

char const	*noOccurrence::what(void) const throw()
{
	return ("Number not found in array");
}

#endif