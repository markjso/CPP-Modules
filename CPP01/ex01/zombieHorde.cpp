/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:45:35 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/07 16:23:09 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if ( N <= 0 )
		return (NULL);
    Zombie  *horde = new Zombie[N];

    for (int i = 0; i < N; i++) {
        horde[i].getName( name );
    }
    return ( horde );
}
