/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <jmarks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:30:10 by jmarks            #+#    #+#             */
/*   Updated: 2023/12/27 16:34:06 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	{
		try
		{
			Bureaucrat alex("Alex", 0);
			std::cout << alex << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "Alex's grade is 0" << std::endl;
			std::cerr << e.what() << std::endl;
		}
	}

	{
		try
		{
			Bureaucrat tim("Tim", 151);
			std::cout << tim << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "Tim's grade is 151" << std::endl;
			std::cerr << e.what() << std::endl;
		}
	}

	{	
		try 
		{
			Bureaucrat lou("Lou", 3);
			std::cout << lou << std::endl;
			lou.incrementGrade();
			std::cout << lou << std::endl;
			lou.incrementGrade();
			std::cout << lou << std::endl;
			lou.incrementGrade();
			std::cout << lou << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{	
		try 
		{
			Bureaucrat ben("Ben", 149);
			std::cout << ben << std::endl;
			ben.decrementGrade();
			std::cout << ben << std::endl;
			ben.decrementGrade();
			std::cout << ben << std::endl;
			ben.decrementGrade();
			std::cout << ben << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
