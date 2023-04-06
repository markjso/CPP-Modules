/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:39:06 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/27 15:39:09 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( ) {
    std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria( const AMateria& copy) {
    std::cout << "AMateria copy construtor called" << std::endl;
    *this = copy;
    return ;
}

AMateria::AMateria( std::string name ) : _name(name) {
    std::cout << "AMateria" << this->_name << " is constructed." << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria" << this->_type  << " is constructed." << std::endl;
}

AMateria::~AMateria() {
    std::cout << "AMateria " << this->_name << " deconstrutor called" << std::endl;
}

AMateria & AMateria::operator=(AMateria const & copy)
{
	std::cout << "AMateria assignment overload operator called." << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

std::string AMateria::getType(void) const
{
    return this->_type;
}

void AMateria::use(ICharacter& target) const {
    std::cout << this->_type << " makes no sound." << std::endl;
	return ;
}	

