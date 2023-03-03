/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:12:32 by jmarks            #+#    #+#             */
/*   Updated: 2023/02/01 12:18:26 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	totalContacts = 0;
    indexContact = 0;
    Contact person[MAX_CONTACTS];
}

PhoneBook::~PhoneBook(){}

void	putstr(std::string tmp){
	if (tmp.size() > 10)
	{
		tmp.resize(9);
		tmp = tmp + ".";
	}
		std::cout << std::setw(10) << tmp << "|";
        return ;
}

void PhoneBook::addContact(){
    Contact newContact;
    if (this->indexContact >= this->MAX_CONTACTS)
    this->indexContact = 0;
    person[indexContact] = newContact;
    newContact.getData();
    indexContact++;
    if (this->totalContacts < 8)
    this->totalContacts++;
    std::cout << "Contact successfully saved." << std::endl;
    return ;
    displayContactInfo();
}

void PhoneBook::searchContacts(){
    if (totalContacts == 0)
    {
        std::cout <<"Error, no contacts exist, please ADD one" << std::endl;
        return ;
    }
    std::cout << "\n"
  	<< "   Index  |First Name| Last Name| Nickname |\n"
    << "  -----------------------------------------|\n";
    for (int i = 0; i < totalContacts; i++)
    std::cout << std::setw(10) << std::right << i + 1 << "|";
    putstr(person[indexContact].getFirst());   
    putstr(person[indexContact].getLast());
    putstr(person[indexContact].getNickname());
    std::cout << person[indexContact].getFirst() << std::endl;
    std::cout << std::endl; 
    std::cout << "Enter Index No : \n";
    std::cin >> selection;
    selection = selection - 1;
    // if (selection >= totalContacts || selection < 0)
    // {
    //     std::cout << "Error, no record for the selected contact" << std::endl;
    //     return ;
    // }
    displayContactInfo();
}

void PhoneBook::displayContactInfo(){
    std::cout << "\n";
    std::cout << "INDEX CARD\n";
    std::cout << "first name: " << person[selection].getFirst() << std::endl;
	std::cout << "last name: " << person[selection].getLast() << std::endl;
    std::cout << "nickname: " << person[selection].getNickname() << std::endl;
	std::cout << "ph number: " << person[selection].getNumber() << std::endl;
	std::cout << "darkest secret: " << person[selection].getSecret() << std::endl;
}