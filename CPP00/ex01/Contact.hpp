/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:09:46 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/01 10:31:20 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact {
    private:
        std::string     firstname;
        std::string     lastname;
        std::string     nickname;
        std::string     number;
        std::string     secret;
        int    index;
    public:
	    Contact();
	    ~Contact();
        void getData();
        std::string getFirst();
        std::string getLast();
        std::string getNickname();
        std::string getNumber();
        std::string getSecret();
        void displayContacts();
        
};
#endif
