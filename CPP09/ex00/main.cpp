/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:09:35 by jmarks            #+#    #+#             */
/*   Updated: 2024/02/07 13:09:37 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Must include an input file" << std::endl;
        return 1;
    }

    std::string bitcoinPricesFile = "data.csv";
    std::string inputFilename = argv[1];

	BitcoinExchange exchange;
    exchange.initialiseDb(bitcoinPricesFile);
    exchange.inputValues(inputFilename);

    return 0;
}

