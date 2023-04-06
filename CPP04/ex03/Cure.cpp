/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:04:44 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/27 16:04:45 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria () {
std::cout << "Cure default constructor called" << std::endl;
this->_type = "cure";
}

Cure::Cure( const Cure& copy ) : AMateria() {
    std::cout << "Cure copy constructor called" << std::endl;
    *this->copy;
    return ;
}

Cure::~Cure() {
    std::cout << "Cure constructor has been deleted" << std::endl;
}

Cure& Cure::operator=( const Cure& copy ){
    std::cout << "Cure copy assignment operator called" << std::endl;
    if (this != &copy)
        this->_type = copy._type;
    return *this;
}

AMateria *	Cure::clone(void) const
{
	AMateria *	cureClone = new Cure();
	return (cureClone);
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << _target.getName() << " 's wounds *" << std::endl;
    return ;
}
