/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:04:29 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/11 17:54:09 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
	return ;
}

Span::Span(unsigned int N) : _N(N) 
{
	return ;
}

Span::Span(Span const &span) : _N(span._N)
{
	*this = span;
	return ;
}

Span &Span::operator=(Span const &span)
{
	if (this == &span)
		return (*this);
	this->_N = span._N;
	return (*this);
}

Span::~Span(void)
{
	return ;
}

void Span::addNumber(int nb)
{
	if (this->_data.size() < this->_N)
		this->_data.push_back(nb);
	else
		throw Span::TooManyNumbers();
	return ;
}

void Span::addNumber(std::vector<int> to_add)
{
	if (this->_data.size() + to_add.size() <= this->_N)
		this->_data.insert(this->_data.end(), to_add.begin(), to_add.end());
	else
		throw Span::TooManyNumbers();
	return ;
}

int Span::longestSpan(void)
{
	if (this->_data.size() > 1)
	{
		std::sort(this->_data.begin(), this->_data.end());
		return (this->_data[this->_data.size() - 1] - this->_data[0]);
	}
	else
		throw Span::NotEnoughNumbers();
	return (0);
}

int Span::shortestSpan(void)
{
	int min_val = 0;
	
	if (this->_data.size() > 1)
	{
		std::sort(this->_data.begin(), this->_data.end());
		min_val = this->_data[1] - this->_data[0];
		for (unsigned int i = 0; i < this->_data.size() - 1; i++)
		{
			if (this->_data[i + 1] - this->_data[i] < min_val)
				min_val =  this->_data[i + 1] - this->_data[i];
		}
		return (min_val);
	}
	else
		throw Span::NotEnoughNumbers();
	return (0);
}

const char *Span::TooManyNumbers::what() const throw()
{
	return ("Impossible: Too Many Numbers!");
}

const char *Span::NotEnoughNumbers::what() const throw()
{
	return ("Impossible: Not Enough Numbers!");
}
