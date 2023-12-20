/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:45:30 by jmarks            #+#    #+#             */
/*   Updated: 2023/12/19 11:45:32 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
# include <iostream>
# include <stdexcept>
# include <string>

class Bureaucrat;

class AForm {
protected:
		std::string const	_name;
		bool				_isSigned;
		int const			_signGrade;
		int const			_execGrade;
public:
	AForm ( void );
	AForm ( std::string const &name, int const &signGrade, int const &execGrade );
	AForm(const AForm& copy );
	virtual ~AForm( void );
	AForm const &operator=( AForm const &copy);
	std:: string const &getName( void ) const;
	bool const &getIsSigned( void ) const;
	int const &getSignGrade( void ) const;
	int const &getExecGrade( void ) const;
	void beSigned(Bureaucrat &bureaucrat);
	virtual void execute(Bureaucrat const & executor) const = 0;
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

std::ostream	&operator<<(std::ostream &str, AForm const &form);
#endif
