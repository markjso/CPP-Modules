/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <jmarks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:45:30 by jmarks            #+#    #+#             */
/*   Updated: 2023/12/27 17:11:56 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <stdexcept>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
		std::string const	_name;
		bool				_isSigned;
		int const			_signGrade;
		int const			_execGrade;
public:
	Form ( void );
	Form ( std::string const &name, int const &signGrade, int const &execGrade );
	Form(const Form& copy );
	~Form( void );
	Form const &operator=( Form const &copy);
	std:: string const &getName( void ) const;
	bool const &getIsSigned( void ) const;
	int const &getSignGrade( void ) const;
	int const &getExecGrade( void ) const;
	void beSigned(Bureaucrat &bureaucrat);
	class GradeTooHighException : public std::exception 
	{
	public:
		const char* what(void) const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char* what(void) const throw();
	};
};

std::ostream	&operator<<(std::ostream &str, Form const &form);
#endif
