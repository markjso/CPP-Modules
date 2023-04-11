/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 13:51:08 by jmarks            #+#    #+#             */
/*   Updated: 2023/04/06 13:20:20 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain( const Brain& copy ) {
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
    return ;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=( const Brain& copy ){
    std::cout << "Brain copy assignment operator called" << std::endl;
    if (this != &copy) {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = copy._ideas[i];
    }
    return *this;
}

void Brain::setIdeas( int& index, const std::string &idea) {
    if (index >= 0 && index < 100) {
        _ideas[index] = idea;
    } else {
        std::cout <<"Invalid index" << std::endl;
    }
}

std::string Brain::getIdeas(int index) const {
    if (index >= 0 && index < 100) { 
    return _ideas[index];
    } else {
        std::cout << "Invalid index" << std::endl;
        return "";
    }
}
