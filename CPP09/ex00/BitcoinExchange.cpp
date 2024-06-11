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
    this->btcDb = copy.btcDb;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy) 
{
    this->btcDb = copy.btcDb;
        return (*this);
}

void BitcoinExchange::initialiseDb(std::string& filename)
{
    std::ifstream infile;
    infile.open(filename, std::ifstream::in);
    if (!infile)
        std::cerr << "Error: can't open file" << std::endl;
    std::string line;
    void (std::getline(infile, line));
    while(std::getline(infile, line))
    {
        std::istringstream iss(line);
        std::string fileDate, fileValue;
        if (getline(iss, fileDate, ',') && getline(iss, fileValue, ','))
            btcDb[fileDate] = fileValue;
    }
    infile.close();
}

static bool is_empty(std::ifstream& filename)
{
    return filename.peek() == std::ifstream::traits_type::eof();
}

void BitcoinExchange::inputValues(std::string& filename)
{
    std::ifstream infile;
    infile.open(filename, std::ifstream::in);
    if (!infile)
        std::cerr << "Error: can't open file" << std::endl;
    if (is_empty(infile))
        std::cerr << "File is empty, nothing to process" << std::endl;
    std::string line;
    void (std::getline(infile, line));
    while(std::getline(infile, line))
    {
        std::istringstream iss(line);
        std::string dateString, inputStr;
        char separator;
        if (!(iss >> dateString >> separator >> inputStr) || separator != '|')
        {
            std::cerr << "Error: bad input => : " << line << std::endl;
            continue;
        }
        if (!checkInputDate(dateString))
        {
            std::cerr << "Error: bad input => : " << dateString << std::endl;
            continue;
        }
        else if (!checkInputAmount(inputStr))
            continue;
        float value = std::stof(inputStr);
        std::map<std::string, std::string>::iterator it = btcDb.find(dateString);
        if (it == btcDb.end()) 
        {
            it = btcDb.lower_bound(dateString);
            if (it != btcDb.begin())
            {
                --it;
            }
        }
        float bitcoinPrice = stof(it->second);
        float bitcoinValue = bitcoinPrice * value;
        std::cout << dateString << " => " << value << " => " << bitcoinValue << std::fixed << std::setprecision(2) << std::endl;
    }
    infile.close();
}

bool BitcoinExchange::checkInputAmount(std::string inputValue) 
{
    bool noError = true;
    if (inputValue.length() == 0)
        noError = false;
    bool success = true;
    if (noError)
    {
        float value = std::stof(inputValue);
        for (size_t i = 0; i < inputValue.length(); i++)
        {
            if (!isdigit(inputValue[i]) && inputValue[i] != '.' && inputValue[i] != '-')
            success = false;
            break ;
        }
        if (!success)
	    {
            std::cout << "Error: not a number => " << value << std::endl;
            return (false);
	    }
        if (value < 0)
        {
            std::cerr << "Error: not a positive number." << std::endl;
            return false;
        }
        if (value > 1000)
        {
            std::cerr << "Error: too large a number." << std::endl;	
            return false;
        }
    }
    return true;	
}

static bool extractDate(const std::string& s, int& y, int& m, int& d)
{
    std::istringstream is(s);
    char delimiter;
    if (is >> y >> delimiter >> m >> delimiter >> d) 
    {
        struct tm date;
        std::memset(&date, 0, sizeof(date));
        date.tm_mday = d;
        date.tm_mon = m - 1;
        date.tm_year = y - 1900;
        date.tm_isdst = -1;

        time_t when = mktime(&date);
        const struct tm *norm = localtime(&when);
        return (norm->tm_year == y - 1900 &&
                norm->tm_mday == d &&
                norm->tm_mon  == m - 1);
    }
    return false;
}

bool BitcoinExchange::checkInputDate(std::string inputDate)
{
    int d, m, y;
    if (!extractDate(inputDate, y, m, d))
        return false;
    else
        return true;
}
