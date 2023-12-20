/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:49:12 by jmarks            #+#    #+#             */
/*   Updated: 2023/12/19 14:49:14 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include <stdexcept>
# include <string>
# include <cstdlib>

class Bureaucrat;

class RobotomyRequestForm : public AForm 
{
private:
		std::string	_target;
public:
	RobotomyRequestForm ( void );
	RobotomyRequestForm ( std::string target );
	RobotomyRequestForm(const RobotomyRequestForm& copy );
	~RobotomyRequestForm( void );
	virtual void execute(Bureaucrat const & executor) const;
	std::string	getTarget() const;
	RobotomyRequestForm const &operator=(RobotomyRequestForm const &copy);
};

#endif
