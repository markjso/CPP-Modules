/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:46:21 by jmarks            #+#    #+#             */
/*   Updated: 2024/02/05 11:46:23 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>

template <typename T> 
typename T::iterator easyfind(T &container, int value);

class noOccurrence: public std::exception 
{
	public:
		const char* what(void) const throw();
};

# include "easyfind.tpp"

#endif
