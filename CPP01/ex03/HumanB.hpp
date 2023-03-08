/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:01:24 by jmarks            #+#    #+#             */
/*   Updated: 2023/02/27 17:01:26 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class   HumanB {
    private:
    std::string _name;
    Weapon *_weapon;
    public:
    HumanB( std::string name );
    ~HumanB();
    void    attack() const;
    void    setWeapon( Weapon &weapon) ;
};

#endif
