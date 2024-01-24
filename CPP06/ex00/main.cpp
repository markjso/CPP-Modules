/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:20:36 by jmarks            #+#    #+#             */
/*   Updated: 2024/01/02 13:20:38 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Invalid number of argurments, must be two" <<std::endl;
		return (1);
	}

	std::string input(av[1]);
	std::cout << "DEBUG: Literal passed to convert function: " << input << std::endl;
    ScalarConverter::convert(input);
	float	f = atof(input.c_str());

	if (f == (int)f)
	{
		std::cout << std::fixed;	
		std::cout << std::setprecision(1);
		std::cout << "float: " << static_cast<float>(f) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << std::endl;
	}
	// else
	// 	std::cout << "float: " << static_cast<float>(f) << "f" << std::endl;
	// 	std::cout << "double: " << static_cast<double>(f) << std::endl;
	
	return (0);
}
