/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:48:52 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/04 17:33:20 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a(10);
	Fixed b(11.5f);
	Fixed c(10);
	std::cout << "a = " << a << " b = " << b << " c = " << c << std::endl;
	std::cout << std::endl;
	std::cout << "---COMPARAISONS---" << std::endl;
	std::cout << "(a > b) = " << (a > b) << std::endl;
	std::cout << "(a < b) = " << (a < b) << std::endl;
	std::cout << "(a >= b) = " << (a >= b) << std::endl;
	std::cout << "(a <= b) = " << (a <= b) << std::endl;
	std::cout << "(a == b) = " << (a == b) << std::endl;
	std::cout << "(a != b) = " << (a != b) << std::endl;
	std::cout << std::endl;
	std::cout << "---ARITHMETICS---" << std::endl;
	std::cout << "(a + b) = " << (a + b) << std::endl;
	std::cout << "(a - b) = " << (a - b) << std::endl;
	std::cout << "(a * b) = " << (a * b) << std::endl;
	std::cout << "(a / b) = " << (a / b) << std::endl;
	std::cout << std::endl;
	std::cout << "---IN/DECREMENTATION---" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "(++a) = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "(a++) = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "(--a) = " << --a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "(a--) = " << a-- << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "---MIN/MAX---" << std::endl;
	std::cout << "max(a, b) = " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a, b) = " << Fixed::min(a, b) << std::endl;
	return 0;
}
