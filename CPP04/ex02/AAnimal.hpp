/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:22:50 by jmarks            #+#    #+#             */
/*   Updated: 2023/04/06 13:19:52 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class   AAnimal {
    protected:
            std::string _type;

    public:
        AAnimal ( void );
        AAnimal ( std::string type );
        AAnimal ( const AAnimal& copy );
        virtual ~AAnimal ( void );
        AAnimal& operator=( const AAnimal& copy );
        virtual void makeSound() const = 0;
	std::string getType() const;
};

#endif
