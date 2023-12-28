/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:48:46 by jmarks            #+#    #+#             */
/*   Updated: 2023/12/19 14:48:47 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <fstream>
# include <stdexcept>
# include <string>
# include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm 
{
private:
		std::string	_target;
public:
	ShrubberyCreationForm ( void );
	ShrubberyCreationForm ( std::string target );
	ShrubberyCreationForm(const ShrubberyCreationForm& copy );
	~ShrubberyCreationForm( void );
	std::string	getTarget(void) const;
	void beExecuted( void ) const;
	ShrubberyCreationForm const &operator=(ShrubberyCreationForm const &copy);
};

#endif
