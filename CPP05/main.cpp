/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:30:10 by jmarks            #+#    #+#             */
/*   Updated: 2023/12/18 13:30:12 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void)
{
	Intern	someRandomIntern;
	AForm*	rrf;

	rrf = someRandomIntern.makeForm("RRF", "Bender");
	std::cout << std::endl;

	delete rrf;

	return (0);
}
