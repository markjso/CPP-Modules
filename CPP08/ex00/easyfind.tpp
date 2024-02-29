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
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it != container.end())
	{
		std::cout << "Found " << value << std::endl;
		return (it);
	}
	else
		throw noOccurrence();
}

char const	*noOccurrence::what(void) const throw()
{
	return ("Value not found in array");
}

#endif