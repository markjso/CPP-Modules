/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:04:35 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/27 16:04:36 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure: public AMateria 

    public:
        Cure ( void );
        Cure ( const Cure& copy );
        ~Cure ( void );
        Cure& operator=( const Cure& copy );
        void use(ICharacter &target);
		AMateria* clone(void) const;
        
};

#endif
