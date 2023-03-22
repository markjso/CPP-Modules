/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:40:01 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/20 15:40:03 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
    std::cout << this->_name << " is constructed" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& enemy ) : _name(enemy._name), _hitPoints(enemy._hitPoints), _energyPoints(enemy._energyPoints), _attackDamage(enemy._attackDamage){
    std::cout << "Copy constructor called on " << enemy._name << std::endl;
    return ;
}

ClapTrap::~ClapTrap() {
    std::cout << this->_name << " is destroyed." << std::endl;
}

ClapTrap& ClapTrap::operator =( const ClapTrap& enemy ){
    std::cout << "Copy assignment operator called" << std::endl;
    this->_name = enemy._name;
	this->_hitPoints = enemy._hitPoints;
	this->_energyPoints = enemy._energyPoints;
	this->_attackDamage = enemy._attackDamage;
	return *this;
}

void ClapTrap::attack( const std::string& target )
{
    std::cout << "ClapTrap " << this->_name << " attacks " << target << std::endl;
    if (_hitPoints <= 0)
    {
        std::cout << this->_name << " is already dead!" << std::endl;
        return ; 
    }
    this->_energyPoints--;
}

void ClapTrap::takeDamage( unsigned int amount )
{
    if (this->_hitPoints == 0)
    {
        std::cout << this->_name << " is already dead!" << std::endl;
        return ; 
    }
    if (this->_energyPoints == 0)
    {
        std::cout << this->_name << " has run out of gas!" << std::endl;
        return ; 
    }
    else
        this->_attackDamage = amount;
        std::cout << this->_name << " takes " << this->_attackDamage << " points of damage!" << std::endl;
        this->_hitPoints = this->_hitPoints - amount;
}

void ClapTrap::beRepaired( unsigned int amount )
{
    if (this->_hitPoints <= 0)
    {
        std::cout << this->_name << " is dead and cannot be repaired!" << std::endl; 
        return ;
    }
    if (this->_energyPoints == 0)
    {
        std::cout << this->_name << " has run out of gas!" << std::endl;
        return ; 
    }
    this->_hitPoints = this->_hitPoints + amount;
    this->_energyPoints++;
    std::cout << this->_name << " receives medical aid and is healed by " << amount << " point." << std::endl;
}

