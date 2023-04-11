/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:13:50 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/27 11:13:52 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

/* A virtual function is a special type of function that, when called, 
resolves to the most-derived version of the function that exists between 
the base and derived class. This capability is known as polymorphism. 
A derived function is considered a match if it has the same signature 
(name, parameter types, and whether it is const) and return type as the 
base version of the function. Such functions are called overrides. */

class   Animal {
    protected:
            std::string _type;

    public:
        Animal ( void );
        Animal ( std::string type );
        Animal ( const Animal& copy );
        virtual ~Animal ( void );
        Animal& operator=( const Animal& copy );
        virtual void makeSound() const;		
	std::string getType() const;		
};

#endif
