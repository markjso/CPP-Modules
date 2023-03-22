/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:46:58 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/22 15:46:59 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class   FragTrap : public ClapTrap {
  
    public:
        FragTrap ( void );
        FragTrap ( std::string name );
        FragTrap ( const FragTrap& copy );
        ~FragTrap ( void );
        FragTrap& operator=( const FragTrap& copy );
        void highFivesGuys( void );
};

#endif

