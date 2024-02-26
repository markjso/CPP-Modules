/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:00:25 by jmarks            #+#    #+#             */
/*   Updated: 2024/02/26 15:00:27 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char* argv[]) 
{
    if (argc != 2) 
	{
        std::cerr << "Invalid number of argruments" << std::endl;
        return (1);
    }

std::string input = argv[1];

RPN reverse;
reverse.RPNcalculator(input);
return (0);
}