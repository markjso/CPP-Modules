/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:55:33 by jmarks            #+#    #+#             */
/*   Updated: 2024/01/03 14:55:36 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

void    a(void) {
	system("leaks base");
}

int	main(void)
{
	// atexit(a);
	srand(time(NULL));
	std::cout << "-------------------Create random Base objects with generate function-----------------------" << '\n';
		std::cout << "-------------------Find the generated type using a pointer and reference-------------------" << '\n';
	for (int j = 0; j < 5; j++)
	{
		Base *test = generate();
		if (test == NULL)
			return (1);
		else
		{
			identify(test);
			identify(*test);
			delete test;
			std::cout << std::endl;
		}
	}
	std::cout << "--------------------Create new Base object without using generate function-------------------" << '\n';
	Base *testUnknown = new Base();
	identify(testUnknown);
	delete testUnknown;
	return (0);
}
