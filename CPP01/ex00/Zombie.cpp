/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:50:26 by jmarks            #+#    #+#             */
/*   Updated: 2023/02/22 16:51:02 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ){}
Zombie::~Zombie(){}

std::string Zombie::getName()
{
    return (name);
}

void Zombie::announce (void)
{
    std::cout << "Enter the name of your zombie: ";
    std::cin >> name;
    std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
    std::cout << getName() << " is destroyed....."
    << std::endl;
    return ;
}