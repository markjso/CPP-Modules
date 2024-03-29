/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:14:23 by jmarks            #+#    #+#             */
/*   Updated: 2023/04/06 13:21:09 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class   Cat : public AAnimal {

    private:
    Brain* _brain;

    public:
        Cat ( void );
        Cat ( const Cat& copy );
        ~Cat ( void );
        Cat& operator=( const Cat& copy );
        Brain * getBrain() const;
        void makeSound() const;
};

#endif
