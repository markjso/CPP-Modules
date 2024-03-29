/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:46:43 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/22 15:46:45 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {
    std::cout << "Default FragTrap constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
    std::cout << "FragTrap " << this->_name << " is constructed" << std::endl;
    this->_hitPoints= 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap& copy ) : ClapTrap(copy) {
    std::cout << "FragTrap copy constructor called on " << copy._name << std::endl;
    return ;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->_name << " is destroyed." << std::endl;
}

FragTrap& FragTrap::operator =( const FragTrap& copy ) {
    ClapTrap::operator=(copy);
    std::cout << "FragTrap copy assignment operator called on " << copy._name << std::endl;
	return *this;
}

void FragTrap::highFivesGuys() {
    if (_hitPoints <= 0)
    {
        std::cout << "FragTrap " << this->_name << " is dead and cannot high five!" << std::endl;
        return ; 
    } 
    std::cout << "Hey FragTrap " << this->_name << " high five!" << std::endl;
}
