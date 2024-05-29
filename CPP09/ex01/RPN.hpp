/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:00:33 by jmarks            #+#    #+#             */
/*   Updated: 2024/02/26 15:00:35 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stack>

class	RPN {
	private:
	std::stack<int> stk;
	public:
	RPN(void);
	RPN(RPN const & copy);
	~RPN(void);
	RPN &operator=(RPN const & copy);
	void RPNcalculator(std::string input);
	
};

