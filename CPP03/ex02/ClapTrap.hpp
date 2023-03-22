/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:39:46 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/20 15:39:50 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class   ClapTrap {
    protected:
            std::string _name;
            int _hitPoints;
            int _energyPoints;
            int _attackDamage;

    public:
        ClapTrap ( void );
        ClapTrap ( std::string name );
        ClapTrap ( const ClapTrap& enemy );
        ~ClapTrap ( void );
        ClapTrap& operator=( const ClapTrap& enemy );
        void attack( const std:: string& target );
        void takeDamage( unsigned int amount );
        void beRepaired( unsigned int amount );
};

#endif