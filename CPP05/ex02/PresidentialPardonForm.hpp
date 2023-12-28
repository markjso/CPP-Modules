/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:49:34 by jmarks            #+#    #+#             */
/*   Updated: 2023/12/19 14:49:36 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include <stdexcept>
# include <string>
# include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm 
{
private:
		std::string	_target;
public:
	PresidentialPardonForm ( void );
	PresidentialPardonForm ( std::string target );
	PresidentialPardonForm(const PresidentialPardonForm& copy );
	~PresidentialPardonForm( void );
	std::string getTarget( void ) const;
	void beExecuted( void ) const;
	PresidentialPardonForm const &operator=(PresidentialPardonForm const &copy);
};

#endif
