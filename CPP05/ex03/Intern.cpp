/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:20:24 by jmarks            #+#    #+#             */
/*   Updated: 2023/12/20 14:20:26 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern& copy)
{
	*this = copy;
}

Intern::~Intern() {}

Intern const &Intern::operator =( const Intern &copy )
{
	(void)copy;
	return *this;
}

static int checkform(std::string name)
{
	std::string formnames[3] = {"SCF", "RRF", "PPF"};
	for (int i = 0; i < 3; i++)
	{
		if (name.compare(formnames[i]) == 0)
		return i;
	}
	return -1;
}

AForm* Intern::makeForm(std::string name, std::string target)
{
	AForm* form;
	int i = checkform(name);
	if (i != -1)
	{
		switch (i)
		{
			case 0:
			form = new ShrubberyCreationForm(target);
			break;
			case 1:
			form = new RobotomyRequestForm(target);
			break;
			case 2:
			form = new PresidentialPardonForm(target);
			break;
		}
		std::cout << std::endl;
		std::cout << "Intern creates " << form->getName() << std::endl;
		return form;
	}
	std::cout << "Intern could not create form" << std::endl;
	return NULL;
}
