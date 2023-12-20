/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:49:27 by jmarks            #+#    #+#             */
/*   Updated: 2023/12/19 14:49:29 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm(), _target("Nixon") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PPF", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy), _target(copy._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm const &PresidentialPardonForm::operator =( const PresidentialPardonForm &copy )
{
	if (this != &copy)
	this->_target = copy.getTarget();
	return *this;
}

std::string	PresidentialPardonForm::getTarget() const 
{
	return this->_target; 
}

void PresidentialPardonForm::execute( const Bureaucrat &executor ) const
{
	(void)executor;
	std::cout << getName() << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}