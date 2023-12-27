/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <jmarks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:30:02 by jmarks            #+#    #+#             */
/*   Updated: 2023/12/27 17:19:22 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
	return (str << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade());
}
