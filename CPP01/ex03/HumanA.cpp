/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:00:37 by jmarks            #+#    #+#             */
/*   Updated: 2023/02/27 17:00:40 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon )
    : _name(name), _weapon(weapon) {};

HumanA::~HumanA() {
    std::cout << this->_name << " has been destroyed!" << std::endl;
};

void HumanA::attack() const {
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}