/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:09:53 by jmarks            #+#    #+#             */
/*   Updated: 2024/02/07 13:09:56 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) {
    *this = copy;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy) {
    if (this != &copy) {
        this->bitcoinPrices = copy.bitcoinPrices;
    }
    return *this;
}

std::map<time_t, double> BitcoinExchange::loadBitcoinPrices(const std::string& filename) {
    std::ifstream file(filename);
    std::map<time_t, double> bitcoinPrices;
    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::tm date = {};
        char separator;
        double price;
        if (iss >> std::get_time(&date, "%Y-%m-%d") >> separator >> price && separator == ',') {
            time_t timestamp = std::mktime(&date);
            bitcoinPrices[timestamp] = price;
        }
    }
    return bitcoinPrices;
}

void BitcoinExchange::calculateBitcoinValue(const std::string& inputFilename, const std::map<time_t, double>& bitcoinPrices) {
    std::ifstream file(inputFilename);
    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::tm date = {};
        double value;
        char separator;
        if (iss >> std::get_time(&date, "%Y-%m-%d") >> separator >> value && separator == '|' && mktime(&date) != -1) {
           if (value <= 0 || value > 1000) {
        std::cerr << "Value must be a positive integer or float between 0 and 1000." << std::endl;
        continue ;
           }
           time_t inputDate = mktime(&date);
            
            std::map<time_t, double>::const_iterator it = bitcoinPrices.lower_bound(inputDate);
            if (it != bitcoinPrices.end()) {
                double bitcoinPrice = it->second;
                double bitcoinValue = bitcoinPrice * value;
                std::cout << "On " << std::put_time(&date, "%Y-%m-%d") << ", the value of " << value << " bitcoin was " << std::fixed << std::setprecision(2) << bitcoinValue << std::endl;
            } else {
                std::cerr << "No exchange rate found for date: " << std::put_time(&date, "%Y-%m-%d") << std::endl;
            }
        } else {
            std::cerr << "Invalid input line: " << line << std::endl;
        }
    }
}