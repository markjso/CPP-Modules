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

#include "Intern.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	Intern	random;
	Bureaucrat	ben("Ben", 42);
	AForm	*form;

	form = random.makeForm("RRF", "Bender");
	delete form;
	form = random.makeForm("SCF", "Rose");
	delete form;
	form = random.makeForm("PPF", "Bill");
	delete form;
	form = random.makeForm("AAA", "John");
	delete form;

	std::cout << "------------------------------------" << std::endl;

	std::cout << ben << std::endl;
	form = random.makeForm("SCF", "Rose");
	// form->execute(ben);
	ben.executeForm(*form);
	delete form;
	form = random.makeForm("RRF", "Bender");
	ben.signForm(*form);
	ben.executeForm(*form);
	delete form;
	form = random.makeForm("PPF", "Bill");
	ben.signForm(*form);
	ben.executeForm(*form);
	delete form;
	return (0);
}
