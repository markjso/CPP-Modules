/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <jmarks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:20:06 by jmarks            #+#    #+#             */
/*   Updated: 2024/01/28 21:00:00 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include <string>
#include <fstream>
#include <climits>
#include <cmath>

class ScalarConverter {
private:
	ScalarConverter ( void );
public:
	ScalarConverter( const ScalarConverter& copy);
	~ScalarConverter (void );
	ScalarConverter const &operator=(ScalarConverter const & copy);
	static void convert(const std::string &input);
};

#endif
