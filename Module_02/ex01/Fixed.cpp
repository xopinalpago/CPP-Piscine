/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:00:40 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/01 16:25:13 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_frac = 8;

Fixed::Fixed(void) : _fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(int const nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed = nb << this->_frac;
}

Fixed::Fixed(float const fl)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed = roundf(fl * (1 << this->_frac));
}

Fixed &Fixed::operator=(Fixed const &nb)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixed = nb.getRawBits();
    return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int Fixed::getRawBits(void) const
{
	return (this->_fixed);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed = raw;
	return ;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_fixed / ((1 << this->_frac)));
}

int Fixed::toInt(void) const
{
	return (this->_fixed >> this->_frac);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}
