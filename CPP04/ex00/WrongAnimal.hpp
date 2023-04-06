/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:14:58 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/27 11:15:00 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class   WrongAnimal {
    protected:
            std::string _type;

    public:
        WrongAnimal ( void );
        WrongAnimal ( std::string type );
        WrongAnimal ( const WrongAnimal& copy );
        ~WrongAnimal ( void );
        WrongAnimal& operator=( const WrongAnimal& copy );
        void makeSound() const;
	std::string getType() const;
};

#endif
