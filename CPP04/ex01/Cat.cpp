/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:14:31 by jmarks            #+#    #+#             */
/*   Updated: 2023/04/06 13:20:45 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* A deep copy allocates memory for the copy and then copies the actual value, 
so that the copy lives in distinct memory from the source. This way, the copy 
and source are distinct and will not affect each other in any way. Doing deep 
copies requires that we write our own copy constructors and overloaded assignment 
operators. */

Cat::Cat() : Animal (), _brain(new Brain()) {
std::cout << "Cat default constructor called" << std::endl;
this->_type = "Cat";
}

Cat::Cat( const Cat& copy ) : Animal(), _brain(nullptr) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
    return ;
}

Cat::~Cat() {
    delete this->_brain;
    std::cout << "Cat brain has been deleted" << std::endl;
}

Cat& Cat::operator=( const Cat& copy ){
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &copy) {
    this->_type = copy.getType();
    if (_brain != nullptr)
    delete this->_brain;
    this->_brain = new Brain(*copy._brain);
    }
    return *this;
}

Brain * Cat::getBrain() const{
    return this->_brain;
}

void Cat::makeSound() const {
    std::cout << "says meow meow." << std::endl;
    return ;
}

