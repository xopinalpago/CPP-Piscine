/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeConvert.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:32:41 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/10 10:14:32 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <sstream>
#include <iomanip>

void from_lim(std::string nb)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
	if (nb == "nanf" || nb == "-inff" || nb == "+inff")
		std::cout << "float: " << nb << std::endl;
	else
		std::cout << "float: " << nb << "f" << std::endl;
	if (nb == "nanf")
    	std::cout << "double: nan" << std::endl;
	else if (nb == "-inff")
		std::cout << "double: -inf" << std::endl;
	else if (nb == "+inff")
		std::cout << "double: +inf" << std::endl;
	else
		std::cout << "double: " << nb << std::endl;			
}

void from_char(std::string nb)
{
	std::cout << "char: '" << nb[0] << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(nb[0]) << std::endl;
    std::cout << "float: " << static_cast<float>(nb[0]) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(nb[0]) << ".0" << std::endl;
}

void from_int(std::string nb)
{
	int value;
    std::istringstream stream(nb);
	stream >> value;
	if (value >= 32 && value <= 126)
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	else if ((value >= 0 && value < 32) || value == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << value << std::endl;
	std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
}

void from_float(std::string nb)
{
	float fvalue;
    std::istringstream stream(nb);
    stream >> fvalue;
	if (fvalue >= 32 && fvalue <= 126)
		std::cout << "char: '" << static_cast<char>(fvalue) << "'" << std::endl;
	else if ((fvalue >= 0 && fvalue < 32) || fvalue == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
    if (fvalue >= static_cast<float>(std::numeric_limits<int>::min()) && fvalue < static_cast<float>(std::numeric_limits<int>::max()))
	{
        std::cout << "int: " << static_cast<int>(fvalue) << std::endl;
	}
	else
	{
        std::cout << "int: impossible" << std::endl;
	}
	if (fvalue == static_cast<int>(fvalue))
	{
		std::cout << "float: " << fvalue << ".0f" << std::endl;
	}
	else
	{
		std::cout << "float: " << fvalue << "f" << std::endl;
	}
	if (fvalue == static_cast<int>(fvalue))
	{
		std::cout << "double: " << static_cast<double>(fvalue) << ".0" << std::endl;
	}
	else
	{
		std::cout << "double: " << static_cast<double>(fvalue) << std::endl;
	}
}

void from_double(std::string nb)
{
	double dvalue;
    std::istringstream stream(nb);
    stream >> dvalue;
	if (dvalue >= 32 && dvalue <= 126)
		std::cout << "char: '" << static_cast<char>(dvalue) << "'" << std::endl;
	else if ((dvalue >= 0 && dvalue < 32) || dvalue == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
    if (dvalue >= static_cast<float>(std::numeric_limits<int>::min()) && dvalue < static_cast<float>(std::numeric_limits<int>::max()))
        std::cout << "int: " << static_cast<int>(dvalue) << std::endl;
    else
	{
        std::cout << "int: impossible" << std::endl;
	}
    if (dvalue >= static_cast<double>(std::numeric_limits<float>::min()) || dvalue < static_cast<double>(std::numeric_limits<float>::max()))
	{
		if (static_cast<float>(dvalue) == static_cast<int>(dvalue))
		{
			std::cout << "float: " << static_cast<float>(dvalue) << ".0f" << std::endl;
		}
		else
		{
        	std::cout << "float: " << static_cast<float>(dvalue) << "f" << std::endl;
		}
	}
	else
        std::cout << "float: impossible" << std::endl;
	if (dvalue == static_cast<int>(dvalue))
	{
		std::cout << "double: " << static_cast<double>(dvalue) << ".0" << std::endl;
	}
	else
	{
		std::cout << "double: " << static_cast<double>(dvalue) << std::endl;
	}
}
