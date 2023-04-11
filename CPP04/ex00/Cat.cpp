/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:14:31 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/27 11:14:32 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal () {
std::cout << "Cat default constructor called" << std::endl;
this->_type = "Cat";
}

Cat::Cat( const Cat& copy ) : Animal(copy._type) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
    return ;
}

Cat::~Cat() {
    std::cout << "Cat deconstructor called" << std::endl;
}

Cat& Cat::operator=( const Cat& copy ){
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &copy)
    this->_type = copy._type;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "says meow meow." << std::endl;
    return ;
}

