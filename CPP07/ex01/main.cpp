/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:16:26 by jmarks            #+#    #+#             */
/*   Updated: 2024/01/30 15:16:28 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	char string[] = "Hello World";
	int array[] = {1, 2, 3, 4};

	std::cout << "___________________________________" << std::endl;
	std::cout << std::endl;
	std::cout << "Using a char array" << std::endl;
	::iter(string, 5, print);
	std::cout << std::endl;
	std::cout << "___________________________________" << std::endl;
	std::cout << std::endl;
	std::cout << "Using an int array" << std::endl;
	::iter(array, 3, print);
	std::cout << std::endl;
	return (0);
}
