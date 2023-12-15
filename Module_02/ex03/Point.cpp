/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:46:36 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/05 15:27:11 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	return ;
}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y))
{
	return ;
}

Point::Point(Point const &point) : _x(point.getX()), _y(point.getY())
{
	return ;
}

Point &Point::operator=(Point const &nb)
{
    (void)nb;
    return (*this);
}

Point::~Point(void)
{
	return ;
}

const Fixed Point::getX(void) const
{
	return (this->_x);
}

const Fixed Point::getY(void) const
{
	return (this->_y);
}