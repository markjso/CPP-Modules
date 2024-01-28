/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <jmarks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:20:36 by jmarks            #+#    #+#             */
/*   Updated: 2024/01/28 21:12:05 by jmarks           ###   ########.fr       */
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
    ScalarConverter::convert(input);
	
	return (0);
}
