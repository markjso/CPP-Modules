/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <jmarks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:30:10 by jmarks            #+#    #+#             */
/*   Updated: 2023/12/27 17:09:21 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(void)
{
	std::cout << std::endl;
	{	
		try 
		{
			Bureaucrat lou("Lou", 33);
			Form form("A13", 48, 96);
			std::cout << lou << std::endl;
			std::cout << form << std::endl;
			std::cout << "--------------Check if the grade is high enough to sign form-------------" << '\n';
			lou.signForm(form);
			std::cout << form << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{	
		try 
		{
			Bureaucrat ben("Ben", 88);
			Form form2("B23", 48, 96);
			std::cout << ben << std::endl;
			std::cout << form2 << std::endl;
			std::cout << "--------------Check if the grade is high enough to sign form-------------" << '\n';
			ben.signForm(form2);
			std::cout << form2 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	return (0);
}
