/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:47:17 by jmarks            #+#    #+#             */
/*   Updated: 2024/02/05 11:47:20 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : maxSize(0), numbers(0) {}

Span::Span(unsigned int N)
{
	maxSize = N;
	numbers.reserve(N);
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span & Span::operator =(const Span &copy)
{
	this->maxSize = copy.maxSize;
	this->numbers = copy.numbers;
	return *this;
}

Span::~Span () {}

void Span::addNumber(int N)
{
	if (numbers.size() < maxSize)
		numbers.push_back(N);
	else
		throw std::exception();
}

unsigned int Span::shortestSpan()
{
	if (numbers.size() <= 1)
		throw noSpan();
	std::sort(numbers.begin(), numbers.end());
	int minDist = INT_MAX;
	for(unsigned int i = 1; i < numbers.size() ; ++i)
	{
		int minSpan = numbers[i] - numbers[i - 1];
		if(minSpan < minDist)
		minDist = minSpan;
	}
	return (minDist);
}

unsigned int Span::longestSpan()
{
	int maxDist;
	if (numbers.size() <= 1)
		throw noSpan();
	std::sort(numbers.begin(), numbers.end());
	maxDist = *(numbers.end()- 1) - *(numbers.begin());
	numbers.clear();
	return(maxDist);
}

char const *Span::noSpan::what(void) const throw()
{
	return ("No span can be found");
} 