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
	int array[] = {1, 2, 3, 4, 5, 6};

	std::cout << "-------Test with a string-------" << std::endl;
	std::cout << "String is: " << string << std::endl;
	int size = 5;
	std::cout << "size is: " << size << std::endl;
	std::cout << "Print string with iter: ";
	::iter(string, size, print);
	std::cout << std::endl;
	std::cout << "-------Test with an int array-------" << std::endl;
	std::cout << "Int array is: ";
	for(int i = 0; i < 6; i++)
	std::cout << array[i];
	std::cout << std::endl;
	int isize = 3;
	std::cout << "size is: " << isize << std::endl;
	std::cout << "Print int array with iter: ";
	::iter(array, isize, print);
	std::cout << std::endl;
	return (0);
}
