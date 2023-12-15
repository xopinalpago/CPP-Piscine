/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:56:06 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/01 16:21:57 by rmeriau          ###   ########.fr       */
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
		Fixed(int const nb);
		Fixed(float const nb);
		Fixed &operator=(Fixed const &nb);
		~Fixed(void);
		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
		float 	toFloat(void) const;
		int 	toInt(void) const;
	private:
		int _fixed;
		int const static _frac;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);

#endif