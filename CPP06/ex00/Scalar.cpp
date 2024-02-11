/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <jmarks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:20:15 by jmarks            #+#    #+#             */
/*   Updated: 2024/01/28 21:17:36 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::ScalarConverter( ScalarConverter const &copy)
{
	(void)copy;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter const &ScalarConverter::operator=( const ScalarConverter &copy )
{
	(void)copy;
	return(*this);
}

static char convertToChar(const std::string& input)
{
	std::cout << "char: ";
	if (isdigit(input[0]))
	{
		int i = input[0] - '0';
		std::cout << "non displayable" << std::endl;
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
		return (static_cast<char>(i));
	}
	else
	{
		char c = input[0];
		int i = static_cast<int>(c);
		std::cout << "'" << c << "'" << std::endl;
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << static_cast<int>(i) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<int>(i) << ".0" << std::endl;
		return (c);
	}
}

static void displayChar(const std::string& input)
{
	if (input.length() == 1)
	{
		convertToChar(input);
		return;
	}
}

static void displayInt(const std::string& input) 
{
	long long i = std::stod(input);
	if (input[0] == '-') 
		std::cout << "char: non displayable" << std::endl;
	else
	{
		if (isprint(i))
			std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
		else 
			std::cout << "char: non displayable" << std::endl;
	}
	std::cout << "int: ";
	if ( i >= INT_MIN && i <= INT_MAX)
	{
		std::cout << i << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
		std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
		std::cout << "double " << static_cast<double>(i) << ".0" << std::endl;
}

static void displayFloat(const std::string& input) 
{
	if (input == "-inff" || input == "+inff" || input == "nanf") 
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << input << std::endl;
		std::cout << "double: " << input.substr(0, input.size() - 1) << std::endl;
		return ;
	}
	else if (input == "-inf" || input == "+inf" || input == "nan") 
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << input << "f" << std::endl;
		std::cout << "double: " << input << std::endl;
		return ;
	}
	else 
	{
		float f = std::stof(input);
		if (f == (int)f)
		{
			std::cout << std::fixed;
			std::cout << std::setprecision(1);
		}
		if (input[0] == '-'|| f >= INT_MAX) 
			std::cout << "char: non displayable" << std::endl;
		else
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(f) << std::endl;
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << std::endl;
	}
}

static void displayDouble(const std::string& input) 
{
	double d = std::stod(input);
	if (input[0] == '-') 
		std::cout << "char: non displayable" << std::endl;
	else
	std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

static bool isChar(const std::string& input) 
{
	if (input[0] == '-')
		return false;
	else
		return input.length() == 1;
}

static bool isInt(const std::string& input) 
{
	 if (input.find('.') != std::string::npos) 
		return false;
	if (input == "-inf" || input == "+inf" || input == "nan" || 
		input == "-inff" || input == "+inff" || input == "nanf")
		return false;
	else 
		return true;
}

static bool isFloat(const std::string& input) 
{
	if (input.find('.') != std::string::npos && input.find('f') != std::string::npos)
		return true;
	if (input == "-inf" || input == "+inf" || input == "nan" 
		|| input == "-inff" || input == "+inff" || input == "nanf")
		return true;
	else 
		return false;
}


static bool isDouble(const std::string& input) 
{
	if (input.find('.') != std::string::npos) 
		return true;
	else 
		return false;
}

void ScalarConverter::convert(const std::string &input)
{
	if (isChar(input))
	displayChar(input);
	else if (isInt(input))
	displayInt(input);
	else if (isFloat(input))
	displayFloat(input);
	else if (isDouble(input)) 
	displayDouble(input);
}