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

class   ScavTrap : public ClapTrap {          // derived class ScavTrap is created
  
    public:
        ScavTrap ( void );                    // it will inherit constructors and destructors
        ScavTrap ( std::string name );        // from ClapTrap but has it's own which will print
        ScavTrap ( const ScavTrap& copy );    // different messages
        ~ScavTrap ( void );
        ScavTrap& operator=( const ScavTrap& copy );
        void attack( const std:: string& target );
        void guardGate();
};

#endif
