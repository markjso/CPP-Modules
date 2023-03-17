/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:27:42 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/14 16:27:48 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class   Fixed{
    private:
            int _raw;
            static const int _fractionBits = 8;

        public:
            Fixed( void );
            Fixed( const Fixed& copy );
            ~Fixed( void );
            Fixed& operator=( const Fixed& copy );
            int getRawBits( void ) const;
            void setRawBits( int const raw );          

};
#endif
