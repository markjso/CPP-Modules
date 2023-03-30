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

/* initialises the _raw variable by converting the int nbr to
the fixed-point binary representation using_fracionalBits. So
nbr(10) is 00000000 00000000 00000000 00001010 in 32-bit integer
format. Shift 8 bits to the left (or multiply by 2^8) it becomes
00000000 00000000 00001010 0000000 or 2560 stored internally */

Fixed::Fixed( int const nbr ) : _raw( nbr << _fractionalBits ) {
    std::cout << "Int constructor called" << std::endl;
}

/* initialises the _raw variable by converting the floating-point value
'f' to the fixed-point binary representation using _fractionalBits and
then rounding to the nearest integer. So multiply 'f(42.42)' by 2^8(256) which is 10859.52
which is rounded to 10859 and stored internally */

Fixed::Fixed( float const f ) : _raw(roundf(f *(1 << _fractionalBits))) {
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

/* the toFloat() function does the opposite of what is happening
in the float constructor. It divides the stored number by 2^8 and 
returns it */

float Fixed::toFloat( void ) const {

    return ( (float)this->_raw / (1 << _fractionBits) );
}

/* the toInt() function does the opposite of what is happening
in the int constructor. It shifts it to the right by 2^8. */

int Fixed::toInt( void ) const {
    return ( this->_raw >> Fixed::_fractionBits );
}

std::ostream& operator << ( std::ostream& output, const Fixed& fpNumber ){
    output << fpNumber.toFloat();
    return ( output );
}

