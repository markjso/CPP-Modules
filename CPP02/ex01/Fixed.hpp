/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:53:07 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/14 17:53:09 by jmarks           ###   ########.fr       */
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
            Fixed& operator=( const Fixed& copy );
            int getRawBits( void ) const;
            void setRawBits( int const raw );
            float toFloat( void ) const;
            int toInt( void ) const;
};

std::ostream& operator << ( std::ostream& output, const Fixed& fpNumber );
#endif
