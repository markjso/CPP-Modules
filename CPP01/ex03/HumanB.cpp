/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:00:49 by jmarks            #+#    #+#             */
/*   Updated: 2023/02/27 17:00:58 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

// because we have set Weapon to be a pointer in HumanB we can set it to NULL
// to indicate that it is not present. If the weapon is not present the attack()
// function will still work and return the else condition

HumanB::HumanB( std::string name) : _name(name), _weapon(NULL) {}

HumanB::~HumanB() {
    std::cout << _name << " has been destroyed!" << std::endl;
}

void HumanB::setWeapon( Weapon &weapon ) {
    _weapon = &weapon;
    return ;
}

void HumanB::attack() const {
    if ( _weapon ) {
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    } else {
    std::cout << _name << " attacks with their bare hands" << std::endl;
    }
    return ;
}
