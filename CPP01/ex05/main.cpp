/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:48:48 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/08 15:48:57 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl complainsALot;

    complainsALot.complain("DEBUG");
    complainsALot.complain("INFO");
    complainsALot.complain("WARNING");
    complainsALot.complain("ERROR");

}
