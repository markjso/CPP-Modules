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
    std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
    std::cout << "ClapTrap " << this->_name << " is constructed" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& copy ) : _name(copy._name), _hitPoints(copy._hitPoints), _energyPoints(copy._energyPoints), _attackDamage(copy._attackDamage){
    std::cout << "ClapTrap copy constructor called on " << copy._name << std::endl;
    return ;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->_name << " is destroyed." << std::endl;
}

ClapTrap& ClapTrap::operator =( const ClapTrap& copy ){
    std::cout << "ClapTrap copy assignment operator called on " << copy._name<< std::endl;
    this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return *this;
}

void ClapTrap::attack( const std::string& target )
{
    std::cout << "ClapTrap " << this->_name << " attacks " << target << "!" << std::endl;
    if (this->_hitPoints <= 0)
    {
        std::cout << this->_name << " is already dead and cannot attack!" << std::endl;
        return ; 
    }
    if (this->_energyPoints == 0)
    {
        std::cout << this->_name << " has run out of gas, cannot attack!" << std::endl;
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
    else
        this->_attackDamage = amount;
        std::cout << "ClapTrap " << this->_name << " takes " << this->_attackDamage << " points of damage!" << std::endl;
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
        std::cout << this->_name << " has run out of gas, cannot be repaired!" << std::endl;
        return ; 
    }
    this->_hitPoints = this->_hitPoints + amount;
    std::cout << this->_name << " receives medical aid and is healed by " << amount << " point." << std::endl;
    this->_energyPoints--;
}