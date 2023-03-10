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

// the std::string get() functions return the appropriate input
// the void set() functions save the input that is entered

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
	firstname = str;
}

void	Contact::setLast(std::string str)
{
	lastname = str;
}

void	Contact::setNickname(std::string str)
{
	nickname = str;
}

void	Contact::setNumber(std::string str)
{
	number = str;
}

void	Contact::setSecret(std::string str)
{
	secret = str;
}
