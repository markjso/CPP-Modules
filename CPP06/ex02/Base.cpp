/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:55:17 by jmarks            #+#    #+#             */
/*   Updated: 2024/01/03 14:55:19 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base* generate(void)
{
	int random = std::rand() % 3;
	switch (random)
	{
		case 0:
			return (new A());
			break;
		case 1:
			return (new B());
			break;
		case 2:
			return (new C());
			break;
		default:
			perror("Something went wrong with the random generator");
			return (NULL);
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Generated pointer type A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Generated pointer type B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Generated pointer type C" << std::endl;
	else
		std::cerr << "Error: unknown type" << std::endl;
}

void identify(Base& p)
{
	char type = 'X';
	try
	{
		(void)dynamic_cast<A &>(p);
		type = 'A';
	}
	catch(const std::exception& e){}

	try
	{
		(void)dynamic_cast<B &>(p);
		type = 'B';
	}
	catch(const std::exception& e){}

	try
	{
		(void)dynamic_cast<C &>(p);
		type = 'C';
	}
	catch(const std::exception& e){}
	if (type != 'X')
		std::cout << "Reference object type " << type << std::endl;
	else
		std::cerr << "Error: unknown type" << std::endl;
}



