/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:15:17 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/27 11:15:20 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class   WrongCat : public WrongAnimal {

    public:
        WrongCat ( void );
        WrongCat ( const WrongCat& copy );
        ~WrongCat ( void );
        WrongCat& operator=( const WrongCat& copy );
        void makeSound() const;
};

#endif
