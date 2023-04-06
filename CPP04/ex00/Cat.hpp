/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:14:23 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/27 11:14:24 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class   Cat : public Animal {

    public:
        Cat ( void );
        Cat ( const Cat& copy );
        ~Cat ( void );
        Cat& operator=( const Cat& copy );
        void makeSound() const;
};

#endif
