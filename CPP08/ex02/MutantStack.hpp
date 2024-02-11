/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:48:07 by jmarks            #+#    #+#             */
/*   Updated: 2024/02/05 11:48:09 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {}
		MutantStack(MutantStack const & copy) : std::stack<T>(copy) {}
		~MutantStack() {}

		typedef typename std::deque<T>::iterator iterator;
		iterator begin() 
		{
			return (this->c.begin());
		}

		iterator end() 
		{
			return (this->c.end());
		}
};

#endif
