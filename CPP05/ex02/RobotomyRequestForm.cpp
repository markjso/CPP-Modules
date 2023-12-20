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
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm(), _target("default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RRF", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy)
{
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm const &RobotomyRequestForm::operator =( const RobotomyRequestForm &copy )
{
	if (this != &copy)
	this->_target = copy.getTarget();
	return *this;
}

std::string	RobotomyRequestForm::getTarget() const 
{
        return this->_target; 
}

void RobotomyRequestForm::execute( const Bureaucrat &executor ) const
{
	(void)executor;
	std::cout << "Bzzzzzzzzzzzzzzzzzzzz" << std::endl;
	if (rand() % 2)
		std::cout << getName() << " has been robotomized successfully" << std::endl;
	else
		std::cout << "robotomy failed" << std::endl;	
}
