/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:49:22 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/08 15:49:24 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class   Harl {
    private:
    void    debug( void );
    void    info( void );
    void    warning( void );
    void    error( void );
    
    public:
    Harl( );
    ~Harl();
    void complain( std::string level);
};

#endif
