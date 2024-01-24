/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:20:06 by jmarks            #+#    #+#             */
/*   Updated: 2024/01/02 13:20:08 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <sstream>
# include <iomanip>
# include <math.h>
# include <string>
# include <limits>
# include <stdlib.h>

class ScalarConverter {
protected:
	ScalarConverter ( void );
public:
	ScalarConverter( const ScalarConverter& copy);
	~ScalarConverter (void );
	ScalarConverter const &operator=(ScalarConverter const & copy);
	static void convert(const std::string &input);
	class NonDisplayableException : public std::exception
	{
	public:
		const char* what(void) const throw();
	};

	class NonConvertibleException : public std::exception
	{
	public:
		const char* what(void) const throw();
	};
};

// std::string checkChar(char *arg);
// float convertToFloat(std::string input);
// char convertToChar(std::string input);

#endif
