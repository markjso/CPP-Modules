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

// void PhoneBook::addContact(){
//     Contact newContact;
//     if (indexContact >= 8)
//     indexContact = 0;
//     person[indexContact] = newContact;
//     newContact.getData();
//     indexContact++;
//     if (totalContacts < 8)
//     totalContacts++;
//     std::cout << "Contact successfully saved." << std::endl;
//     newContact.displayContactInfo();
//     return ;
// }

void PhoneBook::addContact(){
    std::string str;
    str = "";
    index = 0;
    while (str == "")
    {
    std::cout << "Enter First Name: \n";
    if (std::getline(std::cin, str) &&str !="")
    person[index].setFirst(str);
    }
    // str = "";
    // std::cout << "Enter Last Name: \n";
    // std::cin >> person[index].setLast(str);
    // std::cout << "Enter a Nickname: \n";
    // std::cin >> person[index].setNickname(str);
    // std::cout << "Enter Phone Number: \n";
    // std::cin >> person[index].setNumber(str);
    // std::cout << "Enter your darkest secret: \n";
    // std::cin >> person[index].setSecret(str);
    index++;
    std::cout << "Contact successfully saved." << std::endl;
     displayContactInfo(person[index]);
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
    // for (int i = 0; i < totalContacts; i++)
    // {
    //     std::cout << std::setw(10) << std::right << i + 1 << "|";
    //     putstr(person[i].getFirst());   
    //     putstr(person[indexContact].getLast());
    //     putstr(person[indexContact].getNickname());
    // }
    std::cout << std::endl; 
    std::cout << "Enter Index No : \n";
    std::cin >> selection;
    selection = selection - 1;
    if (selection >= totalContacts || selection < 0)
    {
        std::cout << "Error, no record for the selected contact" << std::endl;
        return ;
    }
    displayContactInfo(person[selection]);
}

void PhoneBook::displayContactInfo(Contact person){
    std::cout << "\n";
    std::cout << "INDEX CARD\n";
    std::cout << "first name: " << person.getFirst() << std::endl;
	std::cout << "last name: " << person.getLast() << std::endl;
    std::cout << "nickname: " << person.getNickname() << std::endl;
	std::cout << "ph number: " << person.getNumber() << std::endl;
	std::cout << "darkest secret: " << person.getSecret() << std::endl;
}
