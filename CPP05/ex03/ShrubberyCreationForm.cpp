/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:48:35 by jmarks            #+#    #+#             */
/*   Updated: 2023/12/19 14:48:38 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm(), _target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("SCF", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy), _target(copy._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm const &ShrubberyCreationForm::operator=( const ShrubberyCreationForm &copy )
{
	if (this != &copy)
	this->_target = copy.getTarget();
	return *this;
}

std::string	ShrubberyCreationForm::getTarget() const 
{
        return this->_target; 
}

void ShrubberyCreationForm::beExecuted(void) const
{
std::string tree =
        "       *      \n"
        "     //|\\    \n"
        "    //*|*\\   \n"
        "   //o*|*o\\  \n"
        "  //*o*|*o*\\ \n"
        " //o*o*|*o*o\\ \n"
        "    |*||*|     \n"
        "    |*||*|     \n";

std::string target = this->_target + "_shrubbery";
std::ofstream file(target.c_str());
if(file.fail())
{
	std::cout << "Could not open file" << std::endl;
	return ;
}
file << tree;
file.close();
std::cout << this->_target << " shrubbery created." << std::endl;
}