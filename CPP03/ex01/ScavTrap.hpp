/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:34:50 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/22 13:34:53 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

/* derived class ScavTrap inherited from ClapTrap class
inherits its constructors and deconstructors and its 
public and protected members become public and 
protected members of the derived class. */

class   ScavTrap : public ClapTrap {
  
    public:
        ScavTrap ( void );
        ScavTrap ( std::string name );
        ScavTrap ( const ScavTrap& copy );
        ~ScavTrap ( void );
        ScavTrap& operator=( const ScavTrap& copy );
        void attack( const std:: string& target );
        void guardGate();
};

#endif
