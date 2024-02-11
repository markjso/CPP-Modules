/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:10:06 by jmarks            #+#    #+#             */
/*   Updated: 2024/02/07 13:10:08 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <ctime>
#include <cmath>
#include <iomanip>

class	BitcoinExchange {
	private:
	std::map<time_t, double> bitcoinPrices;
	public:
	BitcoinExchange(void);
	BitcoinExchange(BitcoinExchange const & copy);
	~BitcoinExchange(void);
	BitcoinExchange &operator=(BitcoinExchange const & copy);
	std::tm getDate(const std::string& line) const;
	double getValue(const std::string& line) const;
	std::map<time_t, double> loadBitcoinPrices(std::string const &filename);
	void calculateBitcoinValue(const std::string& inputFilename, const std::map<time_t, double>& bitcoinPrices);
	void printBitcoinPrices() const;
};

#endif