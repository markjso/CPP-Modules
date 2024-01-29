/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:20:37 by jmarks            #+#    #+#             */
/*   Updated: 2024/01/03 13:20:39 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>

struct	Data {
	int	nbr;
	std::string str;
	char	c;
	bool	b;
};

class Serializer {
private:
	Serializer ( void );
public:
	Serializer( const Serializer& copy);
	~Serializer (void );
	Serializer const &operator=(Serializer const & copy);
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};

#endif