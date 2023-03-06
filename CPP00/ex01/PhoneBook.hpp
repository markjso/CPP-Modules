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

/* In the PhoneBook class, there is an array of Contact objects, and each contact is stored at 
// a specific index in the array. When a new contact is added, it is placed in the first available
// index in the array. When a contact is displayed, the user is prompted to enter the index of
// the contact they want to see, and the program retrieves the contact from the array at the 
// specified index. */

class   PhoneBook {
            Contact person[8];
            int totalContacts;
            int indexContact;
            int selection;

        public:
            PhoneBook();
                ~PhoneBook();
            void addContact();
            void searchContacts();
            void displayContactInfo( int index );


};
#endif
