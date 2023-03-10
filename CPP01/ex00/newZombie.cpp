/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:51:15 by jmarks            #+#    #+#             */
/*   Updated: 2023/02/22 16:51:17 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// the operater new allocates memory from heap
// memory must be deleted when finished (see main)

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie ZB( name );
    name = ZB.getName();
    return new Zombie( name );
}
