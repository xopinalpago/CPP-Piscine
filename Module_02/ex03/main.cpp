/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:48:52 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/07 10:19:41 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	// --------------1--------------
    Point a(0, 0);
    Point b(4, 0);
    Point c(2, 2);
	
	// A l'interieur
    Point testPoint1(2, 1);
    bool isInside = bsp(a, b, c, testPoint1);
	std::cout << "Le point (" << testPoint1.getX() << "," << testPoint1.getY() << ") ";
	if (isInside)
		std::cout << "est à l'intérieur du triangle." << std::endl;
	else
		std::cout << "est à l'extérieur du triangle." << std::endl;
	// A l'extérieur
    Point testPoint2(0, 3);
    isInside = bsp(a, b, c, testPoint2);
	std::cout << "Le point (" << testPoint2.getX() << "," << testPoint2.getY() << ") ";
	if (isInside)
		std::cout << "est à l'intérieur du triangle." << std::endl;
	else
		std::cout << "est à l'extérieur du triangle." << std::endl;
	// Bordure
    Point testPoint3(2, 2);
    isInside = bsp(a, b, c, testPoint3);
	std::cout << "Le point (" << testPoint3.getX() << "," << testPoint3.getY() << ") ";
	if (isInside)
		std::cout << "est à l'intérieur du triangle." << std::endl;
	else
		std::cout << "est à l'extérieur du triangle." << std::endl;

	// --------------2--------------
    Point e(-1.5, -0.5);
    Point f(1.5, 3.5);
    Point g(2.5, -2.5);
	
	// A l'interieur
    Point testPoint4(0, 0);
    isInside = bsp(e, f, g, testPoint4);
	std::cout << "Le point (" << testPoint4.getX() << "," << testPoint4.getY() << ") ";
	if (isInside)
		std::cout << "est à l'intérieur du triangle." << std::endl;
	else
		std::cout << "est à l'extérieur du triangle." << std::endl;
	// A l'extérieur
    Point testPoint5(2, 2);
    isInside = bsp(e, f, g, testPoint5);
	std::cout << "Le point (" << testPoint5.getX() << "," << testPoint5.getY() << ") ";
	if (isInside)
		std::cout << "est à l'intérieur du triangle." << std::endl;
	else
		std::cout << "est à l'extérieur du triangle." << std::endl;
	// Bordure
    Point testPoint6(0, -1.5);
    isInside = bsp(e, f, g, testPoint6);
	std::cout << "Le point (" << testPoint6.getX() << "," << testPoint6.getY() << ") ";
	if (isInside)
		std::cout << "est à l'intérieur du triangle." << std::endl;
	else
		std::cout << "est à l'extérieur du triangle." << std::endl;
    return 0;

}
