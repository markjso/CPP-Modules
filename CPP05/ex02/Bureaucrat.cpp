/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <jmarks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:30:02 by jmarks            #+#    #+#             */
/*   Updated: 2023/12/27 17:31:23 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150) {}

Bureaucrat::Bureaucrat( std::string const &name, int grade ) : _name(name)
{
	this->_grade = grade;
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());	
}

Bureaucrat::Bureaucrat( Bureaucrat const &copy ) : _name(copy._name) 
{
	*this = copy;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat const &Bureaucrat::operator=( const Bureaucrat &copy )
{
	this->_grade = copy._grade;
	return *this;
}

std::string const &Bureaucrat::getName( void ) const
{
	return(this->_name);
}

int const &Bureaucrat::getGrade( void ) const
{
	return(this->_grade);
}

void Bureaucrat::incrementGrade( void )
{
	this->_grade--;
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

void Bureaucrat::decrementGrade( void )
{
	this->_grade++;
	if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

void Bureaucrat::signForm( AForm &form )
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signs " << form.getName() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << this->_name << " couldn't sign form " << form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm( AForm const & form)
{
	try
	{
		if (form.getExecGrade() > this->_grade)
		{
			std::cout << this->_name << " executed " << form.getName() << std::endl;
			form.execute(*this);
		}
		else
			throw (Bureaucrat::GradeTooLowException());
	}
	catch (const std::exception &e)
	{
		std::cout << this->_name << " couldn't exectue form " << form.getName() <<  " because " << e.what() << std::endl;
	}
}

char const	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
}

char const	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}

std::ostream	&operator << (std::ostream &str, Bureaucrat const &bureaucrat)
{
	return (str << bureaucrat.getName() << " the bureaucrat's grade is " << bureaucrat.getGrade());
}
