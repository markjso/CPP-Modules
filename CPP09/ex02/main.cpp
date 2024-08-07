/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:53:03 by jmarks            #+#    #+#             */
/*   Updated: 2024/02/29 16:53:05 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char** argv) 
{
    if (argc < 2)
    {
        std::cerr << "Error: No sequence provided." << std::endl;
        return (1);
    }
    PmergeMe merge;
    merge.initialise(argc, argv);
    PmergeMe merge1 = merge;
    
    return (0);
}
