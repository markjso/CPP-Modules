/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:52:49 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/14 17:52:52 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    Fixed a;                    // calls the default constructor
    Fixed const b( 10 );        // calls the int constructor
    Fixed const c( 42.42f );    // calls the float constructor
    Fixed const d( b );         // calls the copy constructor & assignment operator

    a = Fixed( 1234.4321f );    // calls float constructor & assignment operator

    std::cout << "a is " << a << std::endl;     // operator overload function is called on 'a'
    std::cout << "b is " << b << std::endl;     // this then implicitly calls the toFloat member function
    std::cout << "c is " << c << std::endl;     // this converts 'a' to the floating-point representation
    std::cout << "d is " << d << std::endl;     // of the binary value

    std::cout << "a is " << a.toInt() << " as integar" << std::endl;        //calls toInt member function
    std::cout << "b is " << b.toInt() << " as integar" << std::endl;
    std::cout << "c is " << c.toInt() << " as integar" << std::endl;
    std::cout << "d is " << d.toInt() << " as integar" << std::endl;

    return 0;
}
