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

Contact::Contact(){}

Contact::~Contact(){}

std::string Contact::getFirst(){
    return firstname;
}

std::string Contact::getLast(){
    return lastname;
}

std::string Contact::getNickname(){
    return nickname;
}

std::string Contact::getNumber(){
    return number;
}

std::string Contact::getSecret(){
    return secret;
}

void	Contact::setFirst(std::string str)
{
	this->firstname = str;
}

void	Contact::setLast(std::string str)
{
	this->lastname = str;
}

void	Contact::setNickname(std::string str)
{
	this->nickname = str;
}

void	Contact::setNumber(std::string str)
{
	this->number = str;
}

void	Contact::setSecret(std::string str)
{
	this->secret = str;
}

// void Contact::getData(){
//     index = 0;
//     std::cout << "Enter First Name: \n";
//     std::getline(std::cin >> std::ws, firstname);
//     std::cout << "Enter Last Name: \n";
//     std::getline(std::cin >> std::ws, lastname);
//     std::cout << "Enter a Nickname: \n";
//     std::getline(std::cin >> std::ws, nickname);
//     std::cout << "Enter Phone Number: \n";
//     std::getline(std::cin >> std::ws, number);
//     std::cout << "Enter your darkest secret: \n";
//     std::getline(std::cin >> std::ws, secret);
//     index++;
// }

// void Contact::displayContacts(){
//     // int i = 0;
//     // for (int i = 0; i < 3; i++)
// 	//std::cout << std::setw(10) << std::right << i + 1 << "|";
//     putstr(person.getFirst());
//     putstr(person.getLast());
//     putstr(person.getNickname());
//     std::cout << "\n";
// }

// void Contact::displayContactInfo(){
//     std::cout << "\n";
//     std::cout << "INDEX CARD\n";
//     std::cout << "first name: " << getFirst() << std::endl;
// 	std::cout << "last name: " << getLast() << std::endl;
//     std::cout << "nickname: " << getNickname() << std::endl;
// 	std::cout << "ph number: " << getNumber() << std::endl;
// 	std::cout << "darkest secret: " << getSecret() << std::endl;
// }