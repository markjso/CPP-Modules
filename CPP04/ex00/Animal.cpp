/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:13:58 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/27 11:14:00 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( ) : _type("Base Animal") {
    std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal( const Animal& copy) {
    std::cout << "Animal copy construtor called" << std::endl;
    *this = copy;
    return ;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal type constructor called." << std::endl;
	return ;
}

Animal::~Animal() {
    std::cout << "Animal " << _type << " deconstrutor called" << std::endl;
}

Animal & Animal::operator=(Animal const & copy)
{
	std::cout << "Animal assignment overload operator called." << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

std::string Animal::getType(void) const
{
    return this->_type;
}

void Animal::makeSound() const {
    std::cout << this->_type << " roars like a lion." << std::endl;
	return ;
}	
