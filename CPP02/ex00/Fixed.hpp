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

/* A copy constructor is used to initalise the members of
a newly created object by copying the members of an 
already existing object. The object &copy is created 
taking a reference to an object of the same class as an
argument. Copy constructor creates new memory storage
every time it is called whilst the assignment operator does
not make new memory storage. */


class   Fixed{
    private:
            int _raw;
            static const int _fractionBits = 8;

        public:
            Fixed( void );
            Fixed( const Fixed& copy );             // copy constructor
            ~Fixed( void );
            Fixed& operator=( const Fixed& copy );  // copy assignment operator
            int getRawBits( void ) const;
            void setRawBits( int const raw );          

};
#endif
