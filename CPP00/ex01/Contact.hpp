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

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact {			// the class
public:				// access specifier
    std::string     firstname;	// attribute (string variable)
    std::string     lastname;
    std::string     nickname;
    std::string     number;
    std::string     secret;
};
#endif
