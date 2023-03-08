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

HumanB::HumanB( std::string name) : _name(name), _weapon(NULL) {}

HumanB::~HumanB() {
    std::cout << _name << " has been destroyed!" << std::endl;
}

void HumanB::setWeapon( Weapon &weapon ) {
    weapon = &weapon;
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
