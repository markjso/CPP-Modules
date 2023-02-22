/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:09:46 by jmarks            #+#    #+#             */
/*   Updated: 2023/01/31 16:09:54 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

class   PhoneBook { 				// the class
            static const int MAX_CONTACTS = 8;
            Contact person[MAX_CONTACTS];
            int totalContacts;

        public:					//access specifier
            PhoneBook();
	        ~PhoneBook();
            int index;				//attribute (int variable)
            int selection;
            void addContact();
            void displayContacts();
            void displayContactInfo();

};
#endif
