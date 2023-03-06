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

#include "contact.hpp"
#include "phonebook.hpp"

PhoneBook::PhoneBook(){
        totalContacts = 0; // totalContacts is used to keep track of the number of contacts currently in the phonebook
        indexContact = -1; // keeps track of the index of the next contact to be added to the phonebook, 
        selection = 0;  // stores the user's input of the index of the contact they want to display
 }

PhoneBook::~PhoneBook(){}

void    putstr(std::string tmp){
        if (tmp.size() > 10)
        {
                tmp.resize(9);
                tmp = tmp + ".";
        }
                std::cout << std::setw(10) << tmp << "|";
        return ;
}

void PhoneBook::addContact(){
/* the index of each contact is determined by the indexContact variable
// This variable keeps track of the number of contacts that have
// been added to the phone book so far, starting from 0. */
    Contact newContact;
    indexContact++;
    if (indexContact < 7){
            indexContact = 0;
    }

    std::string str;
    std::cout << "Enter First Name:" << std::endl;
    std::cin.ignore();
    std::getline(std::cin, str);
    newContact.setFirst(str);

    std::cout << "Enter Last Name:" << std::endl;
    std::getline(std::cin, str);
    newContact.setLast(str);

    std::cout << "Enter a Nickname" << std::endl;
    std::getline(std::cin, str);
    newContact.setNickname(str);

    std::cout << "Enter Phone Number:" << std::endl;
    std::getline(std::cin, str);
    newContact.setNumber(str);

    std::cout << "Enter your darkest secret:" << std::endl;
    std::getline(std::cin, str);
    newContact.setSecret(str);
    person[totalContacts] = newContact;
if (totalContacts < 8)  
totalContacts++;
    std::cout << "Contact successfully saved." << std::endl;
     return ;
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
    {
        std::cout << std::setw(10) << std::right << i + 1 << "|";
        putstr(person[i].getFirst());
        putstr(person[i].getLast());
        putstr(person[i].getNickname());
    std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Enter Index No : \n";
    std::cin >> selection;
    selection = selection - 1;
    if (selection >= totalContacts || selection < 0)
    {
        std::cout << "Error, no record for the selected contact" << std::endl;
        return ;
    }
    displayContactInfo(selection);
}

void PhoneBook::displayContactInfo( int index ){
    std::cout << "\n";
    std::cout << "INDEX CARD\n";
    std::cout << "first name: " << person[index].getFirst() << std::endl;
        std::cout << "last name: " << person[index].getLast() << std::endl;
    std::cout << "nickname: " << person[index].getNickname() << std::endl;
        std::cout << "ph number: " << person[index].getNumber() << std::endl;
        std::cout << "darkest secret: " << person[index].getSecret() << std::endl;
}
