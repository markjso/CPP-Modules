/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:59:13 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/15 12:59:18 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _raw(0) {
}

Fixed::Fixed( const Fixed& copy ) {
    *this = copy;
    return ;
}

Fixed::Fixed( int const nbr ) : _raw( nbr << _fractionBits ) {
}

Fixed::Fixed( float const f ) : _raw(round(f *(1 << _fractionBits))) {
}

Fixed::~Fixed(){
}

int Fixed::getRawBits( void ) const{
    return this->_raw;
}

void Fixed::setRawBits( int const raw ){
    this->_raw = raw;
}

float Fixed::toFloat( void ) const {
    return ( (float)this->_raw / (1 << _fractionBits) );
}

int Fixed::toInt( void ) const {
    return ( this->_raw >> Fixed::_fractionBits );
}

Fixed& Fixed::operator =( const Fixed& copy ){
    this->_raw = copy.getRawBits();
    return *this;
}

bool Fixed::operator==(const Fixed& rhs)
{
    if ( this->_raw == rhs.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator!=(const Fixed& rhs)
{
    return ( this->_raw != rhs.getRawBits());
        return (true);
    return (false);
}

bool Fixed::operator<(const Fixed& rhs)
{
    return ( this->_raw < rhs.getRawBits());
        return (true);
    return (false);
}

bool Fixed::operator>(const Fixed& rhs)
{
    return ( this->_raw > rhs.getRawBits());
        return (true);
    return (false);
}

bool Fixed::operator<=(const Fixed& rhs)
{
    return ( this->_raw <= rhs.getRawBits());
        return (true);
    return (false);
}

bool Fixed::operator>=(const Fixed& rhs)
{
    return ( this->_raw >= rhs.getRawBits());
        return (true);
    return (false);
}

Fixed Fixed::operator +(Fixed const &rhs) const {
    return ( Fixed( this->toFloat() + rhs.toFloat() ) );
}

Fixed Fixed::operator -(Fixed const &rhs) const {
    return ( Fixed( this->toFloat() - rhs.toFloat() ) );
}

Fixed Fixed::operator *(Fixed const &rhs) const {
    return ( Fixed( this->toFloat() * rhs.toFloat() ) );
}

Fixed Fixed::operator /(Fixed const &rhs) const{
    return ( Fixed( this->toFloat() / rhs.toFloat() ) );
}

Fixed& Fixed::operator++( int ) {
    this->_raw++;
    return (*this);
}

Fixed& Fixed::operator--( int ) {
    this->_raw--;
    return (*this);
}

Fixed Fixed::operator++( int ) {
    Fixed tmp;
    tmp._raw = ++(_raw);
    return (tmp);
}

Fixed Fixed::operator--( int ) {
    Fixed tmp;
    tmp._raw = --(_raw);
    return (tmp);
}

std::ostream& operator << ( std::ostream& output, const Fixed& fpNumber ){
    output << fpNumber.toFloat();
    return ( output );
}

Fixed& Fixed::min( Fixed& lhs, Fixed& rhs) {
    if (lhs.getRawBits() > rhs.getRawBits())
        return (lhs);
    else
        return (rhs);
}

Fixed const &Fixed::min( Fixed const &lhs, Fixed const &rhs) {
    if (lhs.getRawBits() > rhs.getRawBits())
        return (lhs);
    else
        return (rhs);
}

Fixed& Fixed::max( Fixed& lhs, Fixed& rhs) {
    if (lhs.getRawBits() < rhs.getRawBits())
        return (lhs);
    else
        return (rhs);
}

Fixed const &Fixed::max( Fixed const &lhs, Fixed const &rhs) {
    if (lhs.getRawBits() > rhs.getRawBits())
        return (lhs);
    else
        return (rhs);
}
