/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:34:34 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/22 13:34:38 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
    std::cout << "Default ScavTrap constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
    std::cout << "ScavTrap " << this->_name << " is constructed" << std::endl;
    this->_hitPoints= 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap& copy ) : ClapTrap(copy) {
    std::cout << "ScavTrap copy constructor called on " << copy._name << std::endl;
    return ;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->_name << " is destroyed." << std::endl;
}

ScavTrap& ScavTrap::operator =( const ScavTrap& copy ) {
    ClapTrap::operator=(copy);
	return *this;
}

void ScavTrap::attack( const std::string& target )
{
    if (_hitPoints <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " cannot attack as he is already dead!" << std::endl;
        return ; 
    }
    else
    std::cout << "ScavTrap " << this->_name << " strikes " << target << std::endl;
    _energyPoints--;
}

void ScavTrap::guardGate() {
    if (_hitPoints <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " is dead and cannot gaurd the gate!" << std::endl;
        return ; 
    }
    std::cout << "Scavtrap " << this->_name << " is now in gate keeper mode" << std::endl;
}