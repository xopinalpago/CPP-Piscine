/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:44:24 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/05 15:24:50 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		Point(void);
		Point(const float x, const float y);
		Point(Point const &point);
		Point &operator=(Point const &nb);
		~Point(void);
		const Fixed getX(void) const;
		const Fixed getY(void) const;
	private:
		const Fixed _x;
		const Fixed _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif