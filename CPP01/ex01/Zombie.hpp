/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:47:16 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/07 16:21:43 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie {
	std::string	name;
    public:
    Zombie ();
	Zombie( std::string name );
    ~Zombie();
    std::string getName( std::string name );
    void announce ( void ) ;
};

Zombie* zombieHorde( int N, std::string name );
#endif
