/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:46:09 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/07 16:24:31 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int getNBZombies( void )
{
    int nbr;

    std::cout << "How many zombies should we raise from the dead?" << std::endl;
    std::cout << "(enter a number between 1 and 100)" <<std::endl;
    std::cin >> nbr;
    return (nbr);
}

std::string getHordeName( void )
{
    std::string name;
    std::cout << "And what shall we name this horde of zombies?" << std::endl;
    std::getline(std::cin, name);
	return ( name );
}

// call announce on each Zombie object of horde
int main()
{
    int nbr;
    std::string name;
    
    nbr = getNBZombies();
    name = getHordeName();
    Zombie *horde = zombieHorde( nbr, name );

    for (int i = 0; i <nbr; i++)
    horde[i].announce();
    delete [] horde;
}
