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
        ClapTrap poppycock("Poppycock");
        ClapTrap codswallop("Codswallop");
        ClapTrap bull = poppycock;
        ScavTrap bunkum("Bunkum");
        codswallop.attack("Bunkum");
        bunkum.takeDamage(110);
        bunkum.beRepaired(10);
        bunkum.attack("Codswallop");
        poppycock.attack("Codswallop");
        codswallop.takeDamage(30);
        codswallop.beRepaired(20);
        bunkum.guardGate();
        // poppycock.guardGate(); this function will not work
    }
    return (0);
}
