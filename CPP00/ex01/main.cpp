/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:02:34 by jmarks            #+#    #+#             */
/*   Updated: 2023/02/01 12:18:49 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(){
    PhoneBook PB;
    std::string choice;
    PB.index = 0;
    
    while (1) 
    {
        std::cout << "\n";
        std::cout << "MAIN MENU\n";
        std::cout << "ADD - add a new contact\n";
        std::cout << "SEARCH - search a contact\n";
        std::cout << "EXIT - exit the phonebook\n";
        std::cout << "Type your selection: ";
        std::cin >> choice;
        if (choice == "ADD" || choice == "add") 
        {
            PB.addContact();
        }
        else if (choice == "SEARCH" || choice == "search")
        {
            PB.searchContacts();
        }
        else if (choice == "EXIT" || choice == "exit")
        {
            break;
        }
    }
}