/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeTest.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:44:46 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/08 11:58:59 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool is_lim(std::string nb)
{
    if (nb == "-inf" || nb == "+inf" || nb == "nan" 
        || nb == "-inff" || nb == "+inff" || nb == "nanf")
        return (true);
    return (false);
}

bool is_char(std::string nb)
{
    if (nb.size() == 1)
    {
        if (nb[0] >= '0' && nb[0] <= '9')
            return (false);
        return (true);
    }
    return (false);
}

bool is_int(std::string nb)
{
	int i = 0;
    int value;
    long lvalue;
    std::istringstream stream(nb);
    std::istringstream lstream(nb);

	if (nb[i] == '+' || nb[i] == '-')
		i++;
	if (!nb[i])
		return (false);
	while (nb[i])
	{
		if (nb[i] < '0' || nb[i] > '9')
			return (false);
		i++;
	}
    if ((stream >> value).fail())
        return (false);
    lstream >> lvalue;
    if (lvalue < std::numeric_limits<int>::min() || lvalue > std::numeric_limits<int>::max())
	{
        return (false);
	}
	return (true);
}

bool is_float(std::string nb)
{
	std::size_t i = 0;
	int has_point = 0;
    float fvalue;
    std::istringstream fstream(nb);

	if (nb[i] == '+' || nb[i] == '-')
		i++;
	if (!nb[i])
		return (false);
	while (nb[i])
	{
		if ((nb[i] < '0' || nb[i] > '9') && nb[i] != '.' && nb[i] != 'f')
			return (false);
		if (nb[i] == '.')
			has_point++;
		else if (has_point > 1)
			return (false);
		if (nb[i] == 'f' && nb[i + 1] != '\0')
			return (false);
		i++;
	}
	if (nb[i - 1] != 'f' || has_point != 1)
		return (false);
	fstream >> fvalue;
  	if (fstream.fail() || fvalue > std::numeric_limits<float>::max() || fvalue < -std::numeric_limits<float>::max()) 
		return (false);
	return (true);
}

bool is_double(std::string nb)
{
	std::size_t i = 0;
	int has_point = 0;
    double dvalue;
    std::istringstream fstream(nb);

	if (nb[i] == '+' || nb[i] == '-')
		i++;
	if (!nb[i])
		return (false);
	while (nb[i])
	{
		if ((nb[i] < '0' || nb[i] > '9') && nb[i] != '.')
			return (false);
		if (nb[i] == '.')
			has_point++;
		else if (has_point > 1)
			return (false);
		i++;
	}
	if (has_point != 1)
		return (false);
	fstream >> dvalue;
  	if (fstream.fail() || dvalue > std::numeric_limits<double>::max() || dvalue < -std::numeric_limits<double>::max()) 
		return (false);
	return (true);
}
