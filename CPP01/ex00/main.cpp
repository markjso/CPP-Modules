/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:53:30 by jmarks            #+#    #+#             */
/*   Updated: 2023/02/22 16:53:33 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string name;
    Zombie ZB( name );
    name = ZB.getName();
    Zombie zombie1( name );
    Zombie *zombie2;
    
    zombie1.announce();
    randomChump( name );
    zombie2 = newZombie( name );
    zombie2->announce();
    delete zombie2;
}
