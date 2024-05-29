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

static bool isOperator(char ch) 
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
		return (true);
	else
		return (false);
}

void RPN::RPNcalculator(std::string input)
{
	int result;
	for (size_t i = 0; i < input.size(); i++)
	{
		if (!isdigit(input[i]) && !isOperator(input[i]) && input[i] != ' ')
			{
				std::cout << "Error invalid character " << input[i] << std::endl;
				return ;
			}
		else if (std::isdigit(input[i]))
			stk.push(input[i] - '0');
		else if (input[i] == ' ')
			continue ;
		else
		{
			switch (input[i])
			{
				case '+':
				{
					if (stk.size() < 2)
					{
						std::cerr << "Error not enough operators" << std::endl;
						return ;
					}
					int number2 = stk.top(); stk.pop();
					int number1 = stk.top(); stk.pop();
					result = number1 + number2;
					break;
				}
				case '-':
				{
					if (stk.size() < 2)
					{
						std::cerr << "Error not enough operators" << std::endl;
						return ;
					}
					int number2 = stk.top(); stk.pop();
					int number1 = stk.top(); stk.pop();
					result = number1 - number2;
					break;
				}
				case '*':
				{
					if (stk.size() < 2)
					{
						std::cerr << "Error not enough operators" << std::endl;
						return ;
					}
					int number2 = stk.top(); stk.pop();
					int number1 = stk.top(); stk.pop();
					result = number1 * number2;
					break;
				}
				case '/':
				{
					if (stk.size() < 2)
					{
						std::cerr << "Error not enough operators" << std::endl;
						return ;
					}
					int number2 = stk.top(); stk.pop();
					int number1 = stk.top(); stk.pop();
					if (number2 != 0)
					result = number1 / number2;
					else
					{
						std::cerr << "Error: can't divide by zero" << std::endl;
						return ;
					}
					break;
				}
				default:
				if (stk.size() < 2)
				std::cerr << "Error not enough operators" << std::endl;	
				break;
			}
		stk.push(result);
		}
	}
	if (stk.size() != 1)
	{
		std::cerr << "Error" << std::endl;
		return ;
	}
	std::cout << result << std::endl;
}

