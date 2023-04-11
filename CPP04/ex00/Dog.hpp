/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:14:07 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/27 11:14:09 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class   Dog : public Animal {
  
    public:
        Dog ( void );
        Dog ( const Dog& copy );
        ~Dog ( void );
        Dog& operator=( const Dog& copy );
        virtual void makeSound( ) const;
};

#endif
