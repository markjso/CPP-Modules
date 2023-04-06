/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:15:08 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/27 11:15:10 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( ) : _type("WrongAnimal") {
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& copy) {
    std::cout << "WrongAnimal copy construtor called on " << copy._type << std::endl;
    *this = copy;
    return ;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal " << type << " constructor called." << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal " << this->_type << " deconstrutor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & copy)
{
	std::cout << "WrongAnimal assignment overload operator called." << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return *this;
}

std::string WrongAnimal::getType() const
{
    return this->_type;
}

void WrongAnimal::makeSound() const {
    std::cout << "makes WrongAnimal sound." << std::endl;
	return ;
}	
