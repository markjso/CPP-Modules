/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <jmarks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:45:19 by jmarks            #+#    #+#             */
/*   Updated: 2023/12/27 16:48:32 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(void) : _name("default"), _isSigned(false), _signGrade(50), _execGrade(100) {}

Form::Form( std::string const &name, int const &signGrade, int const &execGrade ) : _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (this->_signGrade < 1)
		throw (Form::GradeTooHighException());
	else if (this->_signGrade > 150)
		throw (Form::GradeTooLowException());
	if (this->_execGrade < 1)
		throw (Form::GradeTooHighException());
	else if (this->_execGrade > 150)
		throw (Form::GradeTooLowException());
}

Form::Form( Form const &copy ) : _name(copy._name), _isSigned(copy._isSigned), _signGrade(copy._signGrade), _execGrade(copy._execGrade)
{
	*this = copy;
}

Form::~Form() {}

Form const &Form::operator =( const Form &copy )
{
	this->_isSigned = copy._isSigned;
	return *this;
}

std::string const &Form::getName( void ) const
{
	return(this->_name);
}

bool const &Form::getIsSigned( void ) const
{
	return(this->_isSigned);
}

int const &Form::getSignGrade( void ) const
{
	return(this->_signGrade);
}

int const &Form::getExecGrade( void ) const
{
	return(this->_execGrade);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signGrade)
		throw(Form::GradeTooLowException());
	else
		this->_isSigned = true;
}

char const	*Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
}

char const	*Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}

std::ostream	&operator << (std::ostream &str, Form const &form)
{
	return (str << "Form " << form.getName() << ", form is signed " << form.getIsSigned() << ", sign grade is " << form.getSignGrade() << ", execute grade is " << form.getExecGrade());
}
