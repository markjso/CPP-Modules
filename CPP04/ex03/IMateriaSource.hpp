/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:50:01 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/27 15:50:03 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"

class AMateria;

class   IMateriaSource {

    public:
        virtual ~IMateriaSource() {}
        virtual AMateria* createMateria(std::string const & type) = 0;
        virtual void learnMateria(AMateria*) = 0;
};

#endif

