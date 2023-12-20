/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:45:19 by jmarks            #+#    #+#             */
/*   Updated: 2023/12/19 11:45:20 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm(void) : _name("default"), _isSigned(false), _signGrade(50), _execGrade(100) {}

AForm::AForm( std::string const &name, int const &signGrade, int const &execGrade ) : _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (this->_signGrade < 1)
		throw (AForm::GradeTooHighException());
	else if (this->_signGrade > 150)
		throw (AForm::GradeTooLowException());
	if (this->_execGrade < 1)
		throw (AForm::GradeTooHighException());
	else if (this->_execGrade > 150)
		throw (AForm::GradeTooLowException());
}

AForm::AForm( AForm const &copy ) : _name(copy._name), _isSigned(copy._isSigned), _signGrade(copy._signGrade), _execGrade(copy._execGrade)
{
	*this = copy;
}

AForm::~AForm() {}

AForm const &AForm::operator =( const AForm &copy )
{
	this->_isSigned = copy._isSigned;
	return *this;
}

std::string const &AForm::getName( void ) const
{
	return(this->_name);
}

bool const &AForm::getIsSigned( void ) const
{
	return(this->_isSigned);
}

int const &AForm::getSignGrade( void ) const
{
	return(this->_signGrade);
}

int const &AForm::getExecGrade( void ) const
{
	return(this->_execGrade);
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signGrade)
		throw(AForm::GradeTooLowException());
	else
		this->_isSigned = true;
}

char const	*AForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
}

char const	*AForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}

std::ostream	&operator << (std::ostream &str, AForm const &form)
{
	return (str << "Form name is " << form.getName() << ", sign grade is " << form.getSignGrade() << ", execute grade is " << form.getExecGrade());
}