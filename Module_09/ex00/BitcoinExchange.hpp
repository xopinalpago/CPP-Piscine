/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:12:57 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/16 14:32:50 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <ctime>
#include <string.h>


class BitcoinExchange
{
	public:
        class WrongFormat : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class NegativeNumber : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class LargeNumber : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
		BitcoinExchange(void);
		BitcoinExchange(BitcoinExchange const &copy);
		BitcoinExchange &operator=(BitcoinExchange const &copy);
		~BitcoinExchange(void);
		int read_file(std::string file);
		int read_data(void);
	private:
		void _DisplayData(const std::string date, const float value) const;
		bool _TestDate(const std::string date) const;
		void _TestFormat(const std::string str, const std::string date, const std::string pipe) const;
		void _TestNumber(const float value) const;
		std::map<std::string, float> _data;
};

#endif
