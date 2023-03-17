/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:58:47 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/15 12:58:49 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed c( 5 ); 
   
    std::cout << std::endl;
    std::cout << "Example Test Results" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "++a= " << ++a << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "a++= " << a++ << std::endl;
    std::cout << "a = " << a << std::endl;

    std::cout << "b = " << b << std::endl;

    std::cout << "Max (a, b)= " << Fixed::max( a, b ) << std::endl;
    std::cout << std::endl;
    
    std::cout << "Comparison Operator Test Results" << std::endl;
    Fixed d( 10 );
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "false=0  true=1"<< std::endl;
    std::cout << "c == d = " << Fixed( c == d ) << std::endl;
	std::cout << "d != c = " << Fixed( d != c ) << std::endl;
	std::cout << "c < d = " << Fixed( c < d ) << std::endl;
	std::cout << "d > c = " << Fixed( d > c ) << std::endl;
	std::cout << "d <= c = " << Fixed( d <= c ) << std::endl;
	std::cout << "c >= d = " << Fixed( c >= d ) << std::endl;
    std::cout << std::endl;

    std::cout << "Arithmetic Operator Test Results" << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "b + c = " << Fixed( b + c ) << std::endl;
	std::cout << "b - c = " << Fixed( b - c ) << std::endl;
	std::cout << "c - b = " << Fixed( c - b ) << std::endl;
	std::cout << "b * c = " << Fixed( b * c ) << std::endl;
	std::cout << "b / c = " << Fixed( b / c ) << std::endl;
	std::cout << "c / b = " << Fixed( c / b ) << std::endl;
    std::cout << std::endl;

    Fixed e( 0 );
    std::cout << "Unary Operator Test Results" << std::endl;
    std::cout << "e = " << e << std::endl;
    std::cout << "++e= " << ++e << std::endl;
    std::cout << "--e= " << --e << std::endl;
    std::cout << "e++= " << e++ << std::endl;
    std::cout << "e--= " << e-- << std::endl;
    return 0;
}
