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

void Contact::getData(){
    std::cout << "Enter First Name: \n";
    std::getline(std::cin >> std::ws, firstname);
    std::cout << "Enter Last Name: \n";
    std::getline(std::cin >> std::ws, lastname);
    std::cout << "Enter a Nickname: \n";
    std::getline(std::cin >> std::ws, nickname);
    std::cout << "Enter Phone Number: \n";
    std::getline(std::cin >> std::ws, number);
    std::cout << "Enter your darkest secret: \n";
    std::getline(std::cin >> std::ws, secret);
}

// void Contact::displayContacts(){
//     // int i = 0;
//     // for (int i = 0; i < 3; i++)
// 	//std::cout << std::setw(10) << std::right << i + 1 << "|";
//     putstr(person.getFirst());
//     putstr(person.getLast());
//     putstr(person.getNickname());
//     std::cout << "\n";
// }
