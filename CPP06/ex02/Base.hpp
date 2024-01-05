/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:55:24 by jmarks            #+#    #+#             */
/*   Updated: 2024/01/03 14:55:26 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <stdint.h>
# include <cstdlib>

class Base {
public:
	virtual ~Base(){}
};

class A: public Base{};
class B: public Base{};
class C: public Base{};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
