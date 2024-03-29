/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <jmarks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:30:10 by jmarks            #+#    #+#             */
/*   Updated: 2023/12/27 18:15:04 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	Bureaucrat alex("Alex", 3);
	Bureaucrat lou("Lou", 26);
	ShrubberyCreationForm shrubbery("Hydrangea");
	RobotomyRequestForm robotomy("C3PO");
	PresidentialPardonForm president("Nixon");
	std::cout << std::endl;
	std::cout << alex << std::endl;
	std::cout << lou << std::endl;
	std::cout << std::endl;
	std::cout << shrubbery << std::endl;
	std::cout << robotomy << std::endl;
	std::cout << president << std::endl;
	std::cout << std::endl;
	std::cout << "------------------Test Shrubbery Creation Form-------------------" << '\n';
	alex.signForm(shrubbery);
	alex.executeForm(shrubbery);
	lou.signForm(shrubbery);
	lou.executeForm(shrubbery);
	std::cout << "------------------Test Robotomy Request Form---------------------" << '\n';
	alex.signForm(robotomy);
	alex.executeForm(robotomy);
	alex.executeForm(robotomy);
	lou.signForm(robotomy);
	lou.executeForm(robotomy);
	lou.executeForm(robotomy);
	std::cout << "------------------Test Presidential Pardon Form------------------" << '\n';
	alex.signForm(president);
	alex.executeForm(president);
	lou.signForm(president);
	lou.executeForm(president);
	std::cout << std::endl;
	return (0);
}
