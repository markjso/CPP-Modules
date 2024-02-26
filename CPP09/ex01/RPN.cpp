/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:00:13 by jmarks            #+#    #+#             */
/*   Updated: 2024/02/26 15:00:17 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &copy) 
{
    *this = copy;
}

RPN::~RPN() {}

RPN &RPN::operator=(const RPN &copy) 
{
    if (this != &copy) 
        return *this;
    return *this;
}

// static bool isOperator(char ch)
// {
//     if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
// 		return true;
// 	else
// 		return false;
// }

void RPN::RPNcalculator(std::string input)
{
	std::stack<int> st;
	for (size_t i = 0; i < input.length(); i++)
	{
		char ch = input[i];
		while (st.size() >= 3)
		{
		int number2 = st.top();
		st.pop();
		int number1 = st.top();
		st.pop();
		char op = st.top();
		st.pop();
		switch (op)
		{
			case ' ':
			break;
			case '+':
			{
				if (st.size() < 2)
				{
					std::cerr << "Error: Not enough operands to calculate function" << std::endl;
					return ;
				}
				st.push(number1 + number2);
				break;
			}
			case '-':
			{
				if (st.size() < 2)
				{
					std::cerr << "Error: Not enough operands to calculate function" << std::endl;
					return ;
				}
			st.push(number1 - number2);
			break;
			}
			case '*':
			{
				if (st.size() < 2)
				{
					std::cerr << "Error: Not enough operands to calculate function" << std::endl;
					return ;
				}
			st.push(number1 * number2);
			break;
			}
			case '/':
			{
				if (st.size() < 2)
				{
					std::cerr << "Error: Not enough operands to calculate function" << std::endl;
					return ;
				}
				if (number2 != 0)
				st.push(number1 / number2);
				else
				{
					std::cerr << "Error: can't divide by zero" << std::endl;
					return ;
				}
			break;
			}
			default:
			{
				if (ch < '0' || ch > '9')
				{
					std::cerr << "Invalid character " << ch << std::endl;
					return ;
				}
				st.push(ch - '0');
				break;
			}
		}
		}
	}
	if (st.size() != 1)
	{
		std::cerr << "Error: " << std::endl;
		return ;
	}
	int result = st.top();
	std::cout << result << std::endl;
}

