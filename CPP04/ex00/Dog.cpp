/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:14:15 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/27 11:14:17 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
std::cout << "Dog default constructor called" << std::endl;
this->_type = "Dog";
}

Dog::Dog( const Dog& copy ) : Animal() {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
    return ;
}

Dog::~Dog() {
    std::cout << "Dog deconstructor called" << std::endl;
}

Dog & Dog::operator=( const Dog& copy ){
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &copy)
    this->_type = copy._type;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "says woof woof." << std::endl;
    return ;
}
