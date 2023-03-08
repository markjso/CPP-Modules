/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:00:01 by jmarks            #+#    #+#             */
/*   Updated: 2023/02/27 17:00:04 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class   Weapon {
    private:
    std::string _type;
    
    public:
    Weapon( std::string type );
    ~Weapon();
    std::string &getType();
    void setType( std::string const type);
};

#endif
