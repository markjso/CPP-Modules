/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:44:09 by jmarks            #+#    #+#             */
/*   Updated: 2023/02/22 16:50:14 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie {
	std::string	name;

	public:
	 Zombie( std::string name );
	 ~Zombie( );
	std::string getName();
	void announce ( void ) ;
};

void 	randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif