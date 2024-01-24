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

static char convertToChar(const std::string& input)
{
	if (input.size() == 1 && isdigit(input[0]))
	{
		int i = input[0] - '0';
		std::cout << "char: non displayable" << std::endl;
		std::cout << "int: " << i << std::endl;
		return (static_cast<char>(i));
	}
	else if (input.size() == 1)
	{
		char c = input[0];
		int i = static_cast<int>(c);
		std::cout << "char: '" << c << "'" << std::endl;
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
		return (c);
	}
	else
	{
		throw std::invalid_argument("Invalid character in input");
	}
}

static void displayChar(const std::string& input)
{
	std::cout << "DEBUG: displayConversionChar" << std::endl;
	try
	{
		convertToChar(input);
	}
	catch (const std::exception& e)
	{
		std::cerr << "char: Conversion error - " << e.what() << std::endl;
	}
}

static void displayInt(const std::string& input) 
{
	try
	{
		if (input.size() == 1)
		{
			convertToChar(input);
			return;
		}
		if (!input.empty() && input[0] == '-' && std::all_of(input.begin() + 1, input.end(), isdigit)) 
			std::cout << "char: non displayable" << std::endl;
		else
		{
			try 
			{
				int i = std::stoi(input);
				if (isprint(i))
					std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
				else 
					std::cout << "char: non displayable" << std::endl;
			} 
			catch (const std::out_of_range& e)
			{
				std::cout << "char: non displayable" << std::endl;
			}
		}
		int i = std::stoi(input);
		std::cout << "int: " << i << std::endl;
	}
	catch (const std::exception& e) 
	{
		std::cerr << "int: Conversion error - " << e.what() << std::endl;
	}
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
	if (input == "-inf" || input == "+inf" || input == "nan") 
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << input << "f" << std::endl;
		std::cout << "double: " << input << std::endl;
		return ;
	}
	try 
	{
		float f = std::stof(input);
		std::cout << "char: non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(f) << std::endl;
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << std::endl;

	} 
	catch (const std::exception& e)
	{
		std::cerr << "float: Conversion error - " << e.what() << std::endl;
	}
}

// static void displayDouble(const std::string& input) 
// {
// 	try 
// 	{
// 		double d = std::stod(input);
// 		std::cout << "double: " << d << std::endl;
// 	} 
// 	catch (const std::exception& e) 
// 	{
// 		std::cerr << "double: Conversion error - " << e.what() << std::endl;
// 	}
// }

static bool isChar(const std::string& input) 
{
	return input.size() == 1;
}

static bool isInt(const std::string& input) 
{
	 if (input.find('.') != std::string::npos) 
    {
        return false;
    }
	try 
	{
		void(std::stoi(input));
		return true;
	} 
	catch (...) 
	{
		return false;
	}
}

static bool isFloat(const std::string& input) 
{
	try 
	{
		void(std::stof(input));
		return true;
	} 
	catch (...) 
	{
		return false;
	}
}


// static bool isDouble(const std::string& input) 
// {
// 	try 
// 	{
// 		void(std::stod(input));
// 		return true;
// 	} 
// 	catch (...)
// 	{
// 		return false;
// 	}
// }

void ScalarConverter::convert(const std::string &input)
{
	std::cout << "DEBUG: convert function called with input: " << input << std::endl;
	if (isChar(input))
	displayChar(input);
	else if (isInt(input))
	displayInt(input);
	else if (isFloat(input))
	displayFloat(input);
	// else if (isDouble(input)) 
	// displayDouble(input);
}