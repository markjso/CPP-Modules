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
		unsigned int _N;
		std::vector<int> _numbers;

	public:
		Span(unsigned int N);
		Span(const Span &copy);
		Span &operator = (const Span &copy);
		~Span();
		void addNumber(int N);
		int shortestSpan();
		int longestSpan();
		void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		class noSpan: public std::exception 
	{
		public:
			const char* what(void) const throw();
	};
};

#endif

