/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:59:02 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/15 12:59:05 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class   Fixed{
    private:
            int _raw;
            static const int _fractionBits = 8;

        public:
            Fixed ( void );
            Fixed( int const nbr );
            Fixed( float const f );
            Fixed( const Fixed& copy );
            ~Fixed( void );
            
            int getRawBits( void ) const;
            void setRawBits( int const raw );
            float toFloat( void ) const;
            int toInt( void ) const;
            
            Fixed& operator=( const Fixed& copy );

            bool operator==(const Fixed& rhs);
            bool operator!=(const Fixed& rhs);
            bool operator<(const Fixed& rhs);
            bool operator>(const Fixed& rhs);
            bool operator<=(const Fixed& rhs);
            bool operator>=(const Fixed& rhs);
            
            Fixed operator +(Fixed const &rhs) const;
            Fixed operator -(Fixed const &rhs) const;
            Fixed operator *(Fixed const &rhs) const;
            Fixed operator /(Fixed const &rhs) const;
            
            Fixed& operator++( void );
            Fixed operator++( int );
            Fixed& operator--( void );
            Fixed operator--( int );

            
            static Fixed& min( Fixed& lhs, Fixed& rhs);
            static const Fixed& min ( Fixed const &lhs, Fixed const &rhs );
            static Fixed& max( Fixed& lhs, Fixed& rhs);
            static const Fixed& max ( Fixed const &lhs, Fixed const &rhs );
};

std::ostream& operator << ( std::ostream& output, const Fixed& fpNumber );
#endif
