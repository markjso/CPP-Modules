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
		MutantStack() {}
		MutantStack(MutantStack<T> const & copy)
		{
			*this = copy;
		}

									MutantStack<T> &operator=(MutantStack<T> const & copy)
									{
										if (this != &copy)
											this->c = copy.c;
			return *this;
		}

		~MutantStack() {}

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

		iterator begin()
		{
			return (this->c.begin());
		}

		iterator end() 
		{
			return (this->c.end());
		}

		reverse_iterator rbegin()
		{
			return (this->c.rbegin());
		}

		reverse_iterator rend()
		{
			return (this->c.rend());
		}
};

#endif
