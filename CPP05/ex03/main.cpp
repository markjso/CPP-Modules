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

void    a(void) {
	system("leaks intern");
}

int main(void)
{
	// atexit(a);

	Intern	random;
	Bureaucrat	ben("Ben", 42);
	AForm	*form;

	std::cout << std::endl;
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
	std::cout << *form << std::endl;
	ben.signForm(*form);
	ben.executeForm(*form);
	delete form;
	form = random.makeForm("RRF", "Bender");
	std::cout << *form << std::endl;
	ben.signForm(*form);
	ben.executeForm(*form);
	delete form;
	form = random.makeForm("PPF", "Bill");
	std::cout << *form << std::endl;
	ben.signForm(*form);
	ben.executeForm(*form);
	delete form;
	return (0);
}
