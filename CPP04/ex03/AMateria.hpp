/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:39:19 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/27 15:39:21 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

class   AMateria {
    protected:
            std::string _type;
            std::string _name;

    public:
        AMateria ( void );
        AMateria ( std::string const & type );
        AMateria ( std::string name );
        AMateria ( const AMateria& copy );
        virtual ~AMateria ( void );
        AMateria& operator=( const AMateria& copy );
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
	    std::string const & getType() const;
};

#endif
