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

int main(void)
{
	// Create an array of integers with a size of 5
	Array<int> intArray(5);

	// Display the values using the subscript operator
	std::cout << "Values in the array: ";
	std::cout << intArray[0] << std::endl;
	Array<int> newArray = intArray;
	newArray[0] = 10;
	std::cout << intArray[0] << std::endl;
	std::cout << newArray[0] << std::endl;

	// Test out of bounds exception
	std::cout << "Trying to access an out-of-bounds index..." << std::endl;
	std::cout << intArray[intArray.size()] << std::endl;  // This should throw an exception
	return (0);
}