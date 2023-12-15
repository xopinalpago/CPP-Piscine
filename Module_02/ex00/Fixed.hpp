/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:56:06 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/01 16:23:40 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &fixed);
		Fixed &operator=(Fixed const &nb);
		~Fixed(void);
		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int _fixed;
		int const static _frac;
};

#endif
