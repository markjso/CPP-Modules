/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:49:05 by jmarks            #+#    #+#             */
/*   Updated: 2023/12/19 14:49:07 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm(), _target("C3PO") {}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : AForm("RRF", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy), _target(copy._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm const &RobotomyRequestForm::operator =( const RobotomyRequestForm &copy )
{
	AForm::operator=(copy);
	this->_target = copy._target;
	return *this;
}

std::string	RobotomyRequestForm::getTarget() const 
{
        return this->_target; 
}

void RobotomyRequestForm::beExecuted( void ) const
{
	std::cout << "Bzzzzzzzzzzzzzzzzzzzz" << std::endl;
	if (std::rand() % 2)
		std::cout << getName() << " has been robotomized successfully" << std::endl;
	else
		std::cout << "robotomy failed" << std::endl;	
}
