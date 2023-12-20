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
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	Bureaucrat alex("Alex", 10);
	ShrubberyCreationForm shrubbery("Hydrangea");
	RobotomyRequestForm robotomy("C3PO");
	PresidentialPardonForm president("Nixon");
	std::cout << alex << std::endl;
	std::cout << shrubbery << std::endl;
	std::cout << robotomy << std::endl;
	std::cout << president << std::endl;
	alex.signForm(shrubbery);
	alex.executeForm(shrubbery);
	alex.signForm(robotomy);
	alex.executeForm(robotomy);
	alex.signForm(president);
	alex.executeForm(president);
	return (0);
}
