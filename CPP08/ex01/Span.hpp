/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:47:11 by jmarks            #+#    #+#             */
/*   Updated: 2024/02/05 11:47:13 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class	Span {
	private:
		unsigned int maxSize;
		std::vector<int> numbers;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span &copy);
		Span &operator = (const Span &copy);
		~Span();
		void addNumber(int N);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		template<typename T>
		void addRange(T first, T last)
		{
			unsigned int remain = maxSize - numbers.size();
			unsigned int input = std::distance(first, last);
			if (input > remain)
			{
				throw std::runtime_error("Not enough space to add all numbers");
			}
			numbers.insert(numbers.end(), first, last);
		}

		class noSpan: public std::exception 
		{
			public:
				const char* what(void) const throw();
		};
};

#endif

