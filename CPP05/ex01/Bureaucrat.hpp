/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <jmarks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:28:19 by jmarks            #+#    #+#             */
/*   Updated: 2023/12/27 17:15:05 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <stdexcept>
# include <string>

class Form;

class Bureaucrat {
private:
		std::string	const _name;
		int			_grade;
public:
	Bureaucrat ( void );
	Bureaucrat ( std::string const &name, int grade );
	Bureaucrat(const Bureaucrat& copy );
	~Bureaucrat( void );
	Bureaucrat const &operator=(Bureaucrat const &copy);
	std:: string const &getName( void ) const;
	int const &getGrade( void ) const;
	void incrementGrade( void );
	void decrementGrade( void );
	void signForm( Form &form );
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

std::ostream	&operator<<(std::ostream &str, Bureaucrat const &bureaucrat);
#endif
