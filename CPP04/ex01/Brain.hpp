/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 13:50:58 by jmarks            #+#    #+#             */
/*   Updated: 2023/04/06 13:20:31 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class   Brain {
    private:
            std::string _ideas[100];

    public:
        Brain ( void );
        Brain ( const Brain& copy );
        ~Brain ( void );
        Brain& operator=( const Brain& copy );
        std::string getIdeas(int index) const;
        void setIdeas( int& index, const std::string &idea);
};

#endif
