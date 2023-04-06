/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:13:50 by jmarks            #+#    #+#             */
/*   Updated: 2023/04/06 13:20:07 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

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
