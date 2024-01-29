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
	for (int j = 0; j < 5; j++)
	{
		Base *Test = generate();
		if (Test == NULL)
			return (1);
		else
		{
			identify(Test);
			identify(*Test);
			delete (Test);
			std::cout << std::endl;
		}
	}
	return (0);
}
