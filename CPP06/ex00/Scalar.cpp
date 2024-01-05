/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:20:15 by jmarks            #+#    #+#             */
/*   Updated: 2024/01/02 13:20:17 by jmarks           ###   ########.fr       */
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

// bool isChar(std::string input)
// {
// 	if (input.size() > 1)
// 		return (false);
// 	if (isdigit(input[0]) || !isprint(input[0]))
// 		return (false);
// 	return (true);
// }

// bool isInt(std::string input)
// {
// 	for (size_t i = 0; i < input.size(); i++)
// 	{
// 		if (input[0] == '-')
// 			continue;
// 		if (!isdigit(input[i]))
// 			return (false);
// 	}
// 	return (true);
// }

char convertToChar(std::string input)
{
	char c = input.c_str()[0];

	if (input.size() > 1)
		return (1);
	if (isdigit(input[0]) || !isprint(input[0]))
		return (1);
	if (c < 33 || c > 126)
		std::cout << "char: Non displayable" << std::endl;
	return (static_cast<char>(c));
}


int convertToInt(std::string input)
{	
	double result = std::stod(input);
	for (size_t i = 0; i < input.size(); i++)
	{
		if (input[0] == '-')
			continue;
		if (!isdigit(input[i]))
			return (1);
	}
	if (isnan(result) || isinf(result))
		std::cout << "int: Non displayable" << std::endl;
	if (result < -2147483648 || result > 2147483647)
		std::cout << "int: Non displayable" << std::endl;
	return (static_cast<int>(result));
}

float convertToFloat(const std::string& input)
{
	size_t pos;
	float result = std::stof(input, &pos);
	
	if (pos != input.length() || isnan(result) || isinf(result))
		throw std::invalid_argument("Invalid character in literal or overflow");
	if (input.find(".0f") != std::string::npos)
		result = static_cast<float>(std::stod(input));
	return (result);
}

double convertToDouble(const std::string& input)
{
	size_t pos;
	float result = std::stod(input, &pos);
	
	 if (pos != input.length() || isnan(result) || isinf(result))
		 throw std::invalid_argument("Invalid character in literal or overflow");
		 return (result);
}

bool isFloatLiteral(std::string input)
{
	if (input == "nan" || input == "-inf" || input == "+inf")
		return (true);
	return (false);
}

bool isDoubleLiteral(std::string input)
{
	if (input == "nanf" || input == "-inff" || input == "+inff")
		return (true);
	return (false);
}


void displayChar(std::string input)
{
	try 
	{
		float result = convertToChar(input);
		std::cout << "char: " << result << std::endl;
	} 
	catch (const std::exception& e)
	{
		std::cerr << "char: impossible" << std::endl;
	}
}

void displayInt(std::string input)
{
	try 
	{
		int result = convertToInt(input);
		std::cout << "int: " << result << std::endl;
	} 
	catch (const std::exception& e)
	{
		std::cerr << "int: impossible" << std::endl;
	}
}

void displayFloat(std::string input)
{
	try 
	{
		float result = convertToFloat(input);
		std::cout << "float: " << result << ".0f" << std::endl;
	} 
	catch (const std::exception& e)
	{
		std::cerr << "float: impossible" << std::endl;
	}
}

void displayDouble(std::string input)
{
	try 
	{
		double result = convertToDouble(input);
		std::cout << "double: " << result << ".0" << std::endl;
	} 
	catch (const std::exception& e)
	{
		std::cerr << "double: impossible" << std::endl;
	}
}

void displayFloatLiteral(std::string input)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << input << "f" << std::endl;
	std::cout << "double: " << input << std::endl;
}

void displayDoubleLiteral(std::string input)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << input  << std::endl;
	std::cout << "double: " << input.substr(0, input.size() - 1) << std::endl;
}

void ScalarConverter::convert(const std::string &input)
{
	if (isFloatLiteral(input))
	displayFloatLiteral(input);
	else if (isDoubleLiteral(input))
	displayDoubleLiteral(input);
	else
		displayChar(input);
		displayInt(input);
		displayFloat(input);
		displayDouble(input);
}