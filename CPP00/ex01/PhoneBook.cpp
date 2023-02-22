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
    Contact person[MAX_CONTACTS];
}

PhoneBook::~PhoneBook(){}

void	putstr(std::string tmp)		
{
	if (tmp.size() > 10)
	{
		tmp.resize(9);
		tmp = tmp + ".";
	}
		std::cout << std::setw(10) << tmp << "|";
        return ;
}

void PhoneBook::addContact()			//method/function definition outside the class
{
    if (index >= MAX_CONTACTS)
    index = 0;
    std::cout << "Enter First Name: \n";
    std::getline(std::cin >> std::ws, person[index].firstname);
    std::cout << "Enter Last Name: \n";
    std::getline(std::cin >> std::ws, person[index].lastname);
    std::cout << "Enter a Nickname: \n";
    std::getline(std::cin >> std::ws, person[index].nickname);
    std::cout << "Enter Phone Number: \n";
    std::getline(std::cin >> std::ws, person[index].number);
    std::cout << "Enter your darkest secret: \n";
    std::getline(std::cin >> std::ws, person[index].secret);
    index++;
    if (totalContacts < 8)
    totalContacts++;
    std::cout << "Contact successfully saved." << std::endl;
}

void PhoneBook::displayContacts(){
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
        putstr(person[i].firstname);
        putstr(person[i].lastname);
        putstr(person[i].nickname);
        std::cout << "\n";
    }
    std::cout << "Enter Index No : \n";
    std::cin >> selection;
    selection = selection - 1;
    if (selection >= totalContacts || selection < 0)
    {
        std::cout << "Error, no record for the selected contact" << std::endl;
        return ;
    }
    displayContactInfo();
}

void PhoneBook::displayContactInfo(){
    std::cout << "\n";
    std::cout << "INDEX CARD\n";
    std::cout << "first name: " << person[selection].firstname << std::endl;
	std::cout << "last name: " << person[selection].lastname << std::endl;
    std::cout << "nickname: " << person[selection].nickname << std::endl;
	std::cout << "ph number: " << person[selection].number << std::endl;
	std::cout << "darkest secret: " << person[selection].secret << std::endl;
}
