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

Span::Span(unsigned int N)
{
	_N = N;
	_numbers.reserve(N);
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span & Span::operator =(const Span &copy)
{
	this->_N = copy._N;
	this->_numbers = copy._numbers;
	return *this;
}

Span::~Span () {}

void Span::addNumber(int N)
{
	if (_numbers.size() < _N)
		_numbers.push_back(N);
	else
		throw std::exception();
}

int Span::shortestSpan()
{
	if (_numbers.size() <= 1)
		throw noSpan();
	std::vector<int> numbers = _numbers;
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

int Span::longestSpan()
{
	if (_numbers.size() <= 1)
		throw noSpan();
	std::vector<int>numbers = _numbers;
	std::pair<std::vector<int>::iterator, std::vector<int>::iterator> maxDist;
	maxDist = std::minmax_element(numbers.begin(), numbers.end());
	return (*maxDist.second - *maxDist.first);
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for(std::vector<int>::iterator it = begin; it != end; ++it)
		addNumber(*it);
}

char const *Span::noSpan::what(void) const throw()
{
	return ("No span can be found");
} 