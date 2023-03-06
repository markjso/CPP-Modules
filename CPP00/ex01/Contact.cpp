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
