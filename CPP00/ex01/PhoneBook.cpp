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
        indexContact = 0; // keeps track of the index of the next contact to be added to the phonebook, 
        selection = 0;  // stores the user's input of the index of the contact they want to display
 }

PhoneBook::~PhoneBook(){}

/* using the iomanip library setw sets the width of the column to be 10.
if the string size is greater than 10 it resizes it to 9 and adds a "." */
void    putstr(std::string tmp){
        if (tmp.size() > 10)
        {
                tmp.resize(9);
                tmp = tmp + ".";
        }
                std::cout << std::setw(10) << tmp << "|";
        return ;
}

// Checks whether a string is only composed of numeric characters.
int is_digit(std::string str)
{
    for (int i = 0; i < str.length(); i++) {
        if (!std::isdigit( str[i] )){
            return 0;
        }
    }
    return 1;
}


/* the index of each contact is determined by the indexContact variable
This variable keeps track of the number of contacts that have been added 
to the phone book so far, starting from 0. If it reaches 8 resets to 0.
The input is saved int newContact object by calling member function setFirst etc.
getline skips over whitespace instead of stopping on it. When the user enters a 
phone number the is_digit function checks it is only numbers and returns an error
if it is not */

void PhoneBook::addContact(){

    Contact newContact;
    std::string str;
    
    if (indexContacts >= 8){
    indexContacts = 0;
    }

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

    while (1) {
        std::cout << "Enter Phone Number:" << std::endl;
        std::getline(std::cin >> std::ws, str);
        {
        if (is_digit(str) == 1)
            break ;
        }
        std::cout << "Error, only numbers allowed" << std::endl;
    }
    newContact.setNumber(str);

    std::cout << "Enter your darkest secret:" << std::endl;
    std::getline(std::cin, str);
    newContact.setSecret(str);
    person[indexContacts] = newContact;
    std::cout << "Contact successfully saved." << std::endl;
        
    indexContacts++;
        if (totalContacts < 8)  
        totalContacts++;
    return ;
}
/* this is the grid to display the contacts returned from SEARCH
if no contacts exist returns an error message. Uses a loop to get()
all the entries stored on the person object and display them. Prompts the
user for a selection(index) number. If the index exists calls displayContactInfo. */

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
    if (std::cin.fail()) {
            std::cout << "Error, must be a number" <<std::endl;
            std::cin.clear();
            std::cin.ignore(); 
            return ;
        }
    selection--;
    if (selection >= totalContacts || selection < 0)
    {
        std::cout << "Error, no record for the selected contact" << std::endl;
        return ;
    }
    displayContactInfo(selection);
}

/* displays the Contact details on an INDEX CARD based on the input received 
from selection(index) */

void PhoneBook::displayContactInfo( int index ){
    std::cout << "\n";
    std::cout << "INDEX CARD\n";
    std::cout << "first name: " << person[index].getFirst() << std::endl;
        std::cout << "last name: " << person[index].getLast() << std::endl;
    std::cout << "nickname: " << person[index].getNickname() << std::endl;
        std::cout << "ph number: " << person[index].getNumber() << std::endl;
        std::cout << "darkest secret: " << person[index].getSecret() << std::endl;
}
