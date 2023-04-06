/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:15:28 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/27 11:15:30 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal ("WrongCat") {
std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat& copy ) : WrongAnimal(copy._type) {
    std::cout << "WrongCat copy constructor called on " << copy._type << std::endl;
    *this = copy;
    return ;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat " << this->_type << " deconstructor called" << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat& copy ){
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    WrongAnimal::operator=(copy);
    this->_type = copy.getType();
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "says purr purr." << std::endl;
    return ;
}

