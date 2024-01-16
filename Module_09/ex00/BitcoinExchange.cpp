/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:12:49 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/16 14:32:59 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
	return ;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy)
{
	*this = copy;
	return ;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &copy)
{
	if (this == &copy)
		return (*this);
	return (*this);
}

BitcoinExchange::~BitcoinExchange(void)
{
	return ;
}

bool BitcoinExchange::_TestDate(const std::string date) const
{
	int year, month, day;

    if (date.size() != 10)
        return (false);
    if (date[4] != '-' || date[7] != '-')
        return (false);
    std::istringstream ss(date);
    ss >> year;
    if (year > 2022 || year < 2009)
        return (false);
    ss.ignore();
    ss >> month;
    if (month > 12 || year < 1)
        return (false);
    ss.ignore();
    ss >> day;
    if (day > 31 || day < 1)
        return (false);
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return (false);
	else if (year % 4 == 0 && month == 2 && day > 29)
		return (false);
	else if (year % 4 != 0 && month == 2 && day > 28)
		return (false);
	else if (year == 2009 && month == 1 && day < 2)
		return (false);
	else if (year == 2022 && month > 3)
		return (false);
	else if (year == 2022 && month == 3 && day > 29)
		return (false);
    return (true);
}
	
void BitcoinExchange::_TestFormat(const std::string str, const std::string date, const std::string pipe) const
{
    int nb_spaces = 0;

    for (std::size_t i = 0; i < str.length(); i++)
	{
        if (str[i] == ' ')
            ++nb_spaces;
	}
	if (nb_spaces > 2)
		throw BitcoinExchange::WrongFormat();
	if (!_TestDate(date))
		throw BitcoinExchange::WrongFormat();
	if (pipe.size() != 1 || pipe != "|")
		throw BitcoinExchange::WrongFormat();
}

void BitcoinExchange::_TestNumber(const float value) const
{
	if (value < 0)
		throw BitcoinExchange::NegativeNumber();
	else if (value > 1000)
		throw BitcoinExchange::LargeNumber();
}

void BitcoinExchange::_DisplayData(const std::string date, const float value) const
{
	std::map<std::string, float>::const_iterator it = this->_data.lower_bound(date);

	if (it->first != date && it != this->_data.begin())
		it--;
	std::cout << date << " => " << value << " = " << it->second * value << std::endl;
}

int BitcoinExchange::read_file(std::string file)
{
	std::ifstream ifs(file.c_str());
	std::string line;
	std::string key;
	std::string pipe;
	float value;
	
	if (!ifs.is_open())
		return (std::cout << "Error: could not open file." << std::endl, 0);
	std::getline(ifs, line);
    while (std::getline(ifs, line))
    {
        std::istringstream iss(line);
        iss >> key >> pipe >> value;
		try
		{
			_TestFormat(line, key, pipe);
			_TestNumber(value);
			_DisplayData(key, value);
		}
		catch(const BitcoinExchange::WrongFormat &e)
		{
			std::cout << "Error: " << e.what() << line << std::endl;
		}
		catch(const BitcoinExchange::NegativeNumber &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		catch(const BitcoinExchange::LargeNumber &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		pipe = "\0";
		key = "\0";
		value = -1;
    }
	ifs.close();
	return (1);
}

int BitcoinExchange::read_data(void)
{
	std::ifstream ifs("data.csv");
    std::string line, date;
    float value;

	if (!ifs.is_open())
		return (std::cout << "Error: could not open file." << std::endl, 0);
    while (std::getline(ifs, line))
    {
        line.replace(line.find(","), 1, " ");
        std::istringstream iss(line);
        iss >> date >> value;
        this->_data[date] = value;
    }
	ifs.close();
	return (1);
}

const char *BitcoinExchange::WrongFormat::what() const throw()
{
    return ("bad input => ");
}

const char *BitcoinExchange::NegativeNumber::what() const throw()
{
    return ("not a positive number.");
}

const char *BitcoinExchange::LargeNumber::what() const throw()
{
    return ("too large a number.");
}
