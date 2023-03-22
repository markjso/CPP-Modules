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

int main()
{
    {
        ClapTrap codswallop("Codswallop");
        ClapTrap hokum("Hokum");
        codswallop.attack("Hokum");
        hokum.takeDamage(2);
        hokum.beRepaired(1);
        codswallop.attack("Hokum");
        hokum.takeDamage(10);
        hokum.beRepaired(1);
        codswallop.attack("Hokum");
    }
    return (0);
}
