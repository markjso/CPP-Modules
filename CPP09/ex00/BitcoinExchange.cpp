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

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) 
{
    *this = copy;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy) 
{
    if (this != &copy) 
        return *this;
    return *this;
}

void BitcoinExchange::initialiseDb(std::string& filename)
{
    std::ifstream infile;
    infile.open(filename, std::ifstream::in);
    if (!infile)
    {
        std::cerr << "Error: can't open file" << std::endl;
    }
    std::string line;
    while(std::getline(infile, line))
    {
        std::istringstream iss(line);
        std::string fileDate, fileValue;
        if (getline(iss, fileDate, ',') && getline(iss, fileValue, ','))
        {
            btcDb[fileDate] = fileValue;
        }   
    }
    infile.close();
}

void BitcoinExchange::inputValues(std::string& filename)
{
    std::ifstream infile;
    infile.open(filename, std::ifstream::in);
    if (!infile)
    {
        std::cerr << "Error: can't open file" << std::endl;
    }
    std::string line;
    while(std::getline(infile, line))
    {
        std::istringstream iss(line);
        std::string dateString, inputStr;
        char separator;
        if (!(iss >> dateString >> separator >> inputStr) || separator != '|')
        {
            std::cout << "Error: bad input => : " << line << std::endl;
            continue;
        }
        else if (!checkInputDate(dateString))
        {
            std::cout << "Error: bad input => : " << dateString << std::endl;
            continue;
        }
        checkInputAmount(inputStr);    
        double value = std::stod(inputStr);
        std::map<std::string, std::string>::iterator it = btcDb.find(dateString);
        if (it == btcDb.end()) 
        {
            it = btcDb.lower_bound(dateString);
            if (it != btcDb.begin())
            {
                --it;
            }
        }
        double bitcoinPrice = stod(it->second);
        double bitcoinValue = bitcoinPrice * value;
        if (bitcoinValue < 0.0 || bitcoinValue > 999.9)
        {
            continue;
        }
        std::cout << dateString << " => " << value << " => " << bitcoinValue << std::setprecision(2) << std::endl;
    }
    infile.close();
}

void BitcoinExchange::checkInputAmount(std::string inputValue) 
{
    bool noError = true;
    if (inputValue.length() == 0)
    {
        noError = false;
    }
    if (noError)
    {
        double value = std::stod(inputValue);
        if (value < 0)
            std::cout << "Error: not a positive number." << std::endl;
        if (value > 1000)
            std::cout << "Error: too large a number." << std::endl;	
    }	
}

static bool valid_date(unsigned short year,unsigned short month,unsigned short day){
    unsigned short monthlen[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if (!year || !month || !day || month>12)
        return false;
    if (day>monthlen[month-1])
        return false;
    return true;
}

bool BitcoinExchange::checkInputDate(std::string inputDate)
{
    // struct tm date;
    // char *end = strptime(inputDate.c_str(), "%Y-%m-%d", &date);
    if (!valid_date(inputDate))
        return false;
    else
        return true;
}
