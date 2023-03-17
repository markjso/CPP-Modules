/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:53:17 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/14 17:53:29 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _raw(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& copy ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
    return ;
}

Fixed::Fixed( int const nbr ) : _raw( nbr << _fractionBits ) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const f ) : _raw(roundf(f *(1 << _fractionBits))) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=( const Fixed& copy ){
    std::cout << "Copy assignment operator called" << std::endl;
    this->_raw = copy.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_raw;
}

void Fixed::setRawBits( int const raw ){
    std::cout << "setRawBits member function called" << std::endl;
    this->_raw = raw;
}

float Fixed::toFloat( void ) const {

    return ( (float)this->_raw / (1 << _fractionBits) );
}

int Fixed::toInt( void ) const {
    return ( this->_raw >> Fixed::_fractionBits );
}

std::ostream& operator << ( std::ostream& output, const Fixed& fpNumber ){
    output << fpNumber.toFloat();
    return ( output );
}

