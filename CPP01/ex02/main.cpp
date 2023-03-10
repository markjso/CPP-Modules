/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:46:09 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/07 16:25:32 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

// shows how pointers and references work by printing the address of a variable
// the pointer and reference to it, and the values of each of those

int main( void )
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Memory address of str = " << &str << std::endl;
    std::cout << "Memory address of stringPTR = " << stringPTR <<std::endl;
    std::cout << "Memory address of stringREF = " << &stringREF << std::endl;
    std::cout << std::endl;

    std::cout << "The value of str = " << str << std::endl;
    std::cout << "The value pointed to by stringPTR = " << *stringPTR <<std::endl;
    std::cout << "The value pointed to by stringREF = " << stringREF << std::endl;
	std::cout << std::endl;

}
