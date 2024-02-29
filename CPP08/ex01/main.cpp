/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:46:59 by jmarks            #+#    #+#             */
/*   Updated: 2024/02/05 11:47:00 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;

	Span sp1(100001);

	try
	{
		std::vector<int> numToAdd;
		for (int i = 0; i < 10000; ++i)
		{
			numToAdd.push_back(i);
		}
		sp1.addRange(numToAdd.begin(), numToAdd.end());
		std::cout << "Successfully added 10000 numbers to Span" <<std::endl;
		std::cout << "Shortest span: " << sp1.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp1.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Failed: " << e.what() <<std::endl;
	}

	return (0);
}

