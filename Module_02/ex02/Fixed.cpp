/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:00:40 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/07 10:11:15 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_frac = 8;

Fixed::Fixed(void) : _fixed(0)
{
	return ;
}

Fixed::Fixed(Fixed const &fixed)
{
	*this = fixed;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed::Fixed(int const nb)
{
	this->_fixed = nb << this->_frac;
}

Fixed::Fixed(float const fl)
{
	this->_fixed = roundf(fl * (1 << this->_frac));
}

Fixed &Fixed::operator=(Fixed const &nb)
{
    this->_fixed = nb.getRawBits();
    return (*this);
}

bool Fixed::operator<(Fixed const &nb) const
{
	return (this->getRawBits() < nb.getRawBits());
}

bool Fixed::operator>(Fixed const &nb) const
{
	return (this->getRawBits() > nb.getRawBits());
}

bool Fixed::operator>=(Fixed const &nb) const
{
	return (this->getRawBits() >= nb.getRawBits());
}

bool Fixed::operator<=(Fixed const &nb) const
{
	return (this->getRawBits() <= nb.getRawBits());
}

bool Fixed::operator==(Fixed const &nb) const
{
	return (this->getRawBits() == nb.getRawBits());
}

bool Fixed::operator!=(Fixed const &nb) const
{
	return (this->getRawBits() != nb.getRawBits());
}

Fixed Fixed::operator+(Fixed const &nb) const
{
	return (this->toFloat() + nb.toFloat());
}

Fixed Fixed::operator-(Fixed const &nb) const
{
	return (this->toFloat() - nb.toFloat());
}

Fixed Fixed::operator*(Fixed const &nb) const
{
	return (this->toFloat() * nb.toFloat());
}

Fixed Fixed::operator/(Fixed const &nb) const
{
	return (this->toFloat() / nb.toFloat());
}

Fixed &Fixed::operator++(void)
{
    this->_fixed++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	++(*this);
	return (temp);
}

Fixed &Fixed::operator--(void)
{
    this->_fixed--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	--(*this);
	return (temp);
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

Fixed &Fixed::min(Fixed &n1, Fixed &n2)
{
	if (n1 > n2)
		return (n2);
	else
		return (n1);
}

Fixed const &Fixed::min(Fixed const &n1, Fixed const &n2)
{
	if (n1 > n2)
		return (n2);
	else
		return (n1);
}

Fixed &Fixed::max(Fixed &n1, Fixed &n2)
{
	if (n1 > n2)
		return (n1);
	else
		return (n2);
}

Fixed const &Fixed::max(Fixed const &n1, Fixed const &n2)
{
	if (n1 > n2)
		return (n1);
	else
		return (n2);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}
