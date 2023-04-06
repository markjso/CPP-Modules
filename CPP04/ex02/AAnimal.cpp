/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:25:31 by jmarks            #+#    #+#             */
/*   Updated: 2023/04/06 13:19:52 by jmarks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( ) : _type("AAnimal") {
    std::cout << "Default AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal& copy) {
    std::cout << "AAnimal copy construtor called" << std::endl;
    *this = copy;
    return ;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "AAnimal type constructor called." << std::endl;
	return ;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal " << _type << " deconstrutor called" << std::endl;
}

AAnimal & AAnimal::operator=(AAnimal const & copy)
{
	std::cout << "AAnimal assignment overload operator called." << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

std::string AAnimal::getType(void) const
{
    return this->_type;
}

void AAnimal::makeSound() const {
    std::cout << this->_type << " makes no sound." << std::endl;
	return ;
}	
