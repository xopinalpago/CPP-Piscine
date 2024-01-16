/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:54:39 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/16 17:40:50 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void)
{
	return ;
}

RPN::RPN(RPN const &copy)
{
	*this = copy;
	return ;
}

RPN &RPN::operator=(RPN const &copy)
{
	if (this == &copy)
		return (*this);
	return (*this);
}

RPN::~RPN(void)
{
	return ;
}

int RPN::do_operation(std::string op_data)
{
	std::istringstream iss(op_data);
	std::string value;
	double nb1;
	double nb2;

	while (iss >> value)
	{
		if (value.size() != 1)
			return (std::cout << "Error: bad input" << std::endl, 0);
		else if (isdigit(value[0]))
			this->_data.push(atoi(value.c_str()));
		else if (value[0] == '+' || value[0] == '-' || value[0] == '*' || value[0] == '/')
		{
			nb2 = this->_data.top();
			this->_data.pop();
			nb1 = this->_data.top();
			this->_data.pop();
			if (value[0] == '+')
				this->_data.push(nb1 + nb2);
			else if (value[0] == '-')
				this->_data.push(nb1 - nb2);
			else if (value[0] == '*')
				this->_data.push(nb1 * nb2);
			else if (value[0] == '/')
			{
				if (nb2 == 0)
					return (std::cout << "Error: Division by 0" << std::endl, 0); ;
				this->_data.push(nb1 / nb2);
			}
			else
			{
				return (std::cout << "Error: Process" << std::endl, 0);
			}
		}
		else
		{
			return (std::cout << "Error: bad input" << std::endl, 0);
		}
	}
    if (this->_data.size() != 1)
		return (std::cout << "Error: bad input" << std::endl, 0);
	std::cout << this->_data.top() << std::endl;
	return (1);
}
