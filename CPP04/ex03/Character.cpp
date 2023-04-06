/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:44:03 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/27 15:44:07 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : ICharacter () {
std::cout << "Character default constructor called" << std::endl;
}

Character::Character( const Character& copy ) : ICharacter(copy._type) {
    std::cout << "Character copy constructor called" << std::endl;
    return ;
}

Character::~Character() {
    std::cout << "Character constructor has been deleted" << std::endl;
}

Character& Character::operator=( const Character& copy ){
    std::cout << "Character copy assignment operator called" << std::endl;
    this->_type = copy.getType();
    return *this;
}

std::string Character::getName(std::string name)
{
    this->_name = name;
    return _name;
}

void Character::use(int idx, Character &target) {
    std::cout << "* shoots an ice bolt at " << this->_target << " *" << std::endl;
    return ;
}

void Character::equip(AMateria* m)


void Character::unequip(int index)
