/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:04:24 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/27 16:04:26 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice: public AMateria 

    public:
        Ice ( void );
        Ice ( const Ice& copy );
        ~Ice ( void );
        Ice& operator=( const Ice& copy );
        void use(ICharacter &target);
		AMateria* clone(void) const;
        
};

#endif
