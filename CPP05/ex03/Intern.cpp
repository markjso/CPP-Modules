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

AForm	*Intern::makeForm(const std::string &name, const std::string &target)
{
	int	x = 0;
	AForm	*form;
	std::string formnames[3] = {"SCF", "RRF", "PPF"};
	for (int i = 0; i < 3; i++)
	{
		if (!name.compare(formnames[i]))
		break;
		x++;
	}
	switch (x)
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
		default:
			std::cout << "Intern could not create form " << name << ". Form does not exist" << std::endl;
			return NULL;
			break;
	}
	std::cout << "Form " << name << " has been created by a random intern" << std::endl;
	return (form);
}
