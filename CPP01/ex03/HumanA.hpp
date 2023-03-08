/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:01:10 by jmarks            #+#    #+#             */
/*   Updated: 2023/02/27 17:01:12 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class   HumanA {
    private:
    std::string _name;
    Weapon &_weapon;
    public:
    HumanA( std::string name,  Weapon &weapon);
    ~HumanA();
    void attack() const;
};

#endif
