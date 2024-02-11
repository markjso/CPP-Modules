/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:20:47 by jmarks            #+#    #+#             */
/*   Updated: 2024/01/03 13:20:49 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data	data;
	data.nbr = 42;
	data.str = "This is a string";
	data.c = 'J';
	data.b = true;

	std::cout << std::endl;
	std::cout << "Data address: " << &data << std::endl;
	std::cout << "Data number: " << data.nbr << std::endl;
	std::cout << "Data string: " << data.str << std::endl;
	std::cout << "Data character: " << data.c << std::endl;
	std::cout << "Data bool: " << data.b << std::endl;
	std::cout << std::endl;
	std::cout << "Serializing Data" << std::endl;
	std::cout << "--------------------------------" << std::endl;
	uintptr_t	ptr = Serializer::serialize(&data);
	std::cout << "Serialized uinptr address in decimal: " << ptr << std::endl;
	std::cout << std::endl;
	std::cout << "Deserialized Data" << std::endl;
	std::cout << "--------------------------------" << std::endl;
	Data* converter = Serializer::deserialize(ptr);
	std::cout << "Deserialized data address: " << converter << std::endl;
	std::cout << "Deserialized data number: " << converter->nbr << std::endl;
	std::cout << "Deserialized data string: " << converter->str << std::endl;
	std::cout << "Deserialized data character: " << converter->c << std::endl;
	std::cout << "Deserialized data bool: " << converter->b << std::endl;
}
