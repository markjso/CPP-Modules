/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:34:32 by jmarks            #+#    #+#             */
/*   Updated: 2023/02/22 15:35:35 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main(int ac, char **av)
{
    std::string msg = "* LOUD AND UNBEARABLE FEEDBACK NOISE *"; // create a string called msg with text ""
    if (ac == 1)
    std::cout << msg;                                           // if ac == 1 output msg
    else
    {
    for (int i = 1; i < ac; i++)
        for (int j = 0; av[i][j]; j++)
        std::cout << (char)toupper(av[i][j]);                   //output the arg at av[i][j] changing it to uppercase
    }
        std::cout << std::endl;                                 //output eol
}
