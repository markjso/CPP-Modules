/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:27:28 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/14 16:27:31 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Copy constructor is called when a new object is created
from an existing object as a copy of the existing object.
Copy assignment operater is called when an already initialsed
object is assigned a new value from another existing object. */

int main( void ) {
    Fixed a;            // default constructor called
    Fixed b( a );       // copy constructor is called here (b=a)
    Fixed c;

    c = b;              // assignment operator is called here

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return 0;
}
