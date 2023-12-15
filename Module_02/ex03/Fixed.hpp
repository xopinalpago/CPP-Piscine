/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:56:06 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/01 17:40:34 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &fixed);
		~Fixed(void);
		Fixed(int const nb);
		Fixed(float const nb);

		Fixed &operator=(Fixed const &nb);
		Fixed operator+(Fixed const &nb) const;
		Fixed operator-(Fixed const &nb) const;
		Fixed operator*(Fixed const &nb) const;
		Fixed operator/(Fixed const &nb) const;

		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);
		
		bool operator<(Fixed const &nb) const;
		bool operator>(Fixed const &nb) const;
		bool operator>=(Fixed const &nb) const;
		bool operator<=(Fixed const &nb) const;
		bool operator==(Fixed const &nb) const;
		bool operator!=(Fixed const &nb) const;

		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
		float 	toFloat(void) const;
		int 	toInt(void) const;
		
		Fixed static &min(Fixed &n1, Fixed &n2);
		Fixed const static &min(Fixed const &n1, Fixed const &n2);
		Fixed static &max(Fixed &n1, Fixed &n2);
		Fixed const static &max(Fixed const &n1, Fixed const &n2);
	private:
		int _fixed;
		int const static _frac;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);

#endif