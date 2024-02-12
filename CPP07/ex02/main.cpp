/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:45:35 by jmarks            #+#    #+#             */
/*   Updated: 2024/01/30 15:45:37 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 5

void    a(void) {
	system("leaks template");
}

int main(void)
{
	// atexit(a);
	Array<int> test;
	std::cout << "---------------Create empty array------------------------------------------" << '\n';
	std::cout << "empty array addrress: " << &test << std::endl;
	Array<int> numbers(MAX_VAL);
	srand(time(NULL));
	for (unsigned int i = 0; i < numbers.size(); i++)
	{
		const int value = rand();
		numbers[i] = value;
	}
	std::cout << std::endl;
	std::cout << "---------------Create array class of type int---------------------------------" << '\n';
	std::cout << "Size of array is: " << numbers.size() << std::endl;
	numbers.printValues();
	std::cout << std::endl;
	Array<int> copyArray(numbers);
	std::cout << "---------------Create copy [array] of type int--------------------------------" << '\n';
	std::cout << "Size of copy [array] is: " << copyArray.size() << std::endl;
	copyArray.printValues();
	std::cout << std::endl;
	std::cout << "---------------Testing if index is out of bounds on both ---------------------" << '\n';
	try
	{
		int i = 7;
		std::cout << "Index is: " << i << std::endl;
		std::cout << numbers[i] << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n'; 
	}
	try
	{
		int i = -23;
		std::cout << "Index is: " << i << std::endl;
		std::cout << copyArray[i] << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n'; 
	}
	std::cout << std::endl;
	std::cout << "---------------Modify original array by changing value of index [0]-----------" << '\n';
	numbers[0] = 10;
	std::cout << "---------------Printing index[0] of both arrays-------------------------------" << '\n';
	std::cout << "original array: " << numbers[0] << std::endl;
	std::cout << "copy array: " << copyArray[0] << std::endl;
	std::cout << std::endl;
	std::cout << "---------------Create array using test case in subject------------------------" << '\n';
	int* a = new int();
	std::cout << "---------------Print values of test case array---------------------------------" << '\n';
	for (int i = 0; i < MAX_VAL; ++i)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	delete a;

	return (0);
}
