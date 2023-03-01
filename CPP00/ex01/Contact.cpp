/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:40:00 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/01 10:40:09 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(){}	//constructor
Contact::~Contact(){}	//destructor

void Contact::displayContactInfo(){
    std::cout << "\n";
    std::cout << "INDEX CARD\n";
    std::cout << "first name: " << firstname << std::endl;
	std::cout << "last name: " << lastname << std::endl;
    std::cout << "nickname: " << nickname << std::endl;
	std::cout << "ph number: " << number << std::endl;
	std::cout << "darkest secret: " << secret << std::endl;
}
