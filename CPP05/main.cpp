/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:30:10 by jmarks            #+#    #+#             */
/*   Updated: 2023/12/18 13:30:12 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	{
		try
		{
			Form form1("F42", 0, 5);
			std::cout << form1 << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "Form F42 sign grade is 0, execute grade is 5" << std::endl;
			std::cout << e.what() << std::endl;
		}
	}

	{	
		try 
		{
			Bureaucrat lou("Lou", 33);
			Form form("A13", 48, 96);
			std::cout << lou << std::endl;
			std::cout << form << std::endl;
			lou.signForm(form);
			std::cout << form << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{	
		try 
		{
			Bureaucrat ben("Ben", 88);
			Form form2("B23", 48, 96);
			std::cout << ben << std::endl;
			std::cout << form2 << std::endl;
			ben.signForm(form2);
			std::cout << form2 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
