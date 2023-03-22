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
#include "FragTrap.hpp"

int main()
{
    {
        ClapTrap codswallop("Codswallop");
        ScavTrap bunkum("Bunkum");
        FragTrap tommyrot("Tommyrot");

        tommyrot.highFivesGuys();
        codswallop.attack("Tommyrot");
        tommyrot.takeDamage(50);
        bunkum.attack("Tommyrot");
        tommyrot.takeDamage(50);
        tommyrot.beRepaired(20);
        bunkum.attack("Codswallop");
        codswallop.takeDamage(50);
        codswallop.beRepaired(30);
    }
    return (0);
}
