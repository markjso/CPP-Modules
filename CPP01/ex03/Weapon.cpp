/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:00:17 by jmarks            #+#    #+#             */
/*   Updated: 2023/02/27 17:00:23 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) {
    this->_type = type;
}

Weapon::~Weapon() {
    std::cout << this->_type << " has been destroyed!" << std::endl;
}

void    Weapon::setType(std::string type) {
    this->_type = type;
}

std::string &Weapon::getType() {
    return this->_type;
}