/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:04:16 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/27 16:04:18 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria () {
std::cout << "Ice default constructor called" << std::endl;
this->_type = "ice";
}

Ice::Ice( const Ice& copy ) : AMateria() {
    std::cout << "Ice copy constructor called" << std::endl;
    *this = copy;
    return ;
}

Ice::~Ice() {
    std::cout << "Ice constructor has been deleted" << std::endl;
}

Ice& Ice::operator=( const Ice& copy ){
    std::cout << "Ice copy assignment operator called" << std::endl;
    if (this != &copy)
        this->_type = copy._type;
    return *this;
}

AMateria *	Ice::clone() const
{
	AMateria *	iceClone = new Ice();
	return (iceClone);
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << _target.getName() << " *" << std::endl;
    return ;
}

