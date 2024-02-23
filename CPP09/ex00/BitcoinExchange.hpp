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
#include <stdexcept>

class	BitcoinExchange {
	private:
	std::map<std::string, std::string> btcDb;
	public:
	BitcoinExchange(void);
	BitcoinExchange(BitcoinExchange const & copy);
	~BitcoinExchange(void);
	BitcoinExchange &operator=(BitcoinExchange const & copy);
	void initialiseDb(std::string& filename);
	void inputValues(std::string& filename);
	bool checkInputAmount(std::string inputValue);
	bool checkInputDate(std::string inputDate);
};

#endif