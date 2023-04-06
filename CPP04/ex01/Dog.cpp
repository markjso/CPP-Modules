/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:14:15 by jmarks            #+#    #+#             */
/*   Updated: 2023/04/06 13:21:20 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(), _brain(new Brain()) {
std::cout << "Dog default constructor called" << std::endl;
this->_type = "Dog";
}

Dog::Dog( const Dog& copy ) : Animal(), _brain(nullptr) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
    return ;
}

Dog::~Dog() {
    delete this->_brain;
    std::cout <<"Dog brain has been deleted" << std::endl;
}

Dog& Dog::operator=( const Dog& copy ){
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &copy) {
    this->_type = copy.getType();
    if (_brain != nullptr)
    delete this->_brain;
    this->_brain = new Brain(*copy._brain);
    }
    return *this;
}

Brain * Dog::getBrain() const {
    return this->_brain;
}

void Dog::makeSound() const {
    std::cout << "says woof woof." << std::endl;
    return ;
}
