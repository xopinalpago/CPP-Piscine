/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:44:46 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/08 12:12:15 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
	return ;
}

ScalarConverter::ScalarConverter(ScalarConverter const & scalarconverter)
{
	*this = scalarconverter;
	return ;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const & scalarconverter)
{
	if (this == &scalarconverter)
        return (*this);
	return (*this);
}

ScalarConverter::~ScalarConverter(void)
{
	return ;
}

void ScalarConverter::convert(const std::string nb)
{
	if (is_lim(nb))
        from_lim(nb);
    else if (is_char(nb))
		from_char(nb);
    else if (is_int(nb))
		from_int(nb);
    else if (is_float(nb))
		from_float(nb);
    else if (is_double(nb))
		from_double(nb);
    else
	{
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
	}
}