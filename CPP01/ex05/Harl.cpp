/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:49:08 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/08 15:49:10 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl
    << "I love having extra bacon for my burger" << std::endl;
    return ;
}

void Harl::info( void )
{
    std::cout << "[ INFO ]" << std::endl
    << "I cannot believe adding extra bacon costs more money" << std::endl;
    return ;
}

void Harl::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl
    << "I think I deserve some extra bacon for free" << std::endl;
    return ;
}

void Harl::error( void )
{
    std::cout << "[ ERROR ]" << std::endl
    << "This is unacceptable, I want to speak to the manager" << std::endl;
    return ;
}

void Harl::complain( std::string level )
{
    typedef void( Harl::*fptr)(void);
    std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" }; 
    fptr complain[4] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

    for(int i = 0; i < 4; i++) {
        if (levels[i] == level)
        {
            (this->*complain[i])();
            return ;
        }
    }
    return ;
}