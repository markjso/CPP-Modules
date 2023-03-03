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

class   PhoneBook {
            //static const int MAX_CONTACTS = 8;
            Contact person[8];
            int totalContacts;
            int indexContact;

        public:
            PhoneBook();
	        ~PhoneBook();
            void getData();
            int index;
            int selection;
            void addContact();
            void searchContacts();
            void displayContactInfo( Contact person );
            

};
#endif
