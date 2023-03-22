/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:39:31 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/20 15:39:33 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    {
        ClapTrap codswallop("Codswallop");
        ScavTrap bunkum("Bunkum");
        codswallop.attack("Bunkum");
        bunkum.takeDamage(20);
        bunkum.beRepaired(10);
        bunkum.attack("Codswallop");
        codswallop.attack("Bunkum");
        bunkum.takeDamage(30);
        bunkum.beRepaired(20);
        bunkum.guardGate();
    }
    return (0);
}
