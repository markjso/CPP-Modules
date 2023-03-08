/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:47:01 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/07 16:22:41 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}
Zombie::Zombie( std::string name ){}
Zombie::~Zombie(){
    std::cout << getName( name ) << " is destroyed." << std::endl;
}

std::string Zombie::getName( std::string name )
{
    name = name;
    return (name);
}
void Zombie::announce (void)
{
    std::cout << getName( name ) << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}
