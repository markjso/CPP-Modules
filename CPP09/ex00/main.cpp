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

    const std::string bitcoinPricesFile = "data.csv";
    const std::string inputFilename = argv[1];

	BitcoinExchange exchange;
    std::map<time_t, double> bitcoinPrices = exchange.loadBitcoinPrices(bitcoinPricesFile);
    exchange.calculateBitcoinValue(inputFilename, bitcoinPrices);


    return 0;
}

