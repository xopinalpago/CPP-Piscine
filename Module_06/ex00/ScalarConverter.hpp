/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:44:42 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/08 14:07:02 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <limits>

class ScalarConverter
{
	public:
		static void convert(const std::string str);
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const & scalarconverter);
		ScalarConverter &operator=(ScalarConverter const & scalarconverter);
		~ScalarConverter();
};

bool is_lim(std::string nb);
bool is_char(std::string nb);
bool is_int(std::string nb);
bool is_float(std::string nb);
bool is_double(std::string nb);
void from_lim(std::string nb);
void from_char(std::string nb);
void from_int(std::string nb);
void from_float(std::string nb);
void from_double(std::string nb);
		
#endif
