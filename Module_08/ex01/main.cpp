/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:04:05 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/11 18:09:55 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::string cyanCode = "\033[1;36m";
	std::string resetCode = "\033[0m";

    std::cout << cyanCode << "Test empty Span" << resetCode << std::endl;
	Span sp0(0);
	try
	{
		std::cout << sp0.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << sp0.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    std::cout << cyanCode << "Test Span of size 1" << resetCode << std::endl;
	Span sp1(1);
	sp1.addNumber(6);
	try
	{
		std::cout << sp1.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
    std::cout << cyanCode << "Test to many arguments" << resetCode << std::endl;
	Span sp2(5);
	sp2.addNumber(6);
	sp2.addNumber(3);
	sp2.addNumber(17);
	sp2.addNumber(9);
	sp2.addNumber(11);

	std::vector<int> vect;
	vect.push_back(10);
	vect.push_back(20);
	vect.push_back(30);
	vect.push_back(30);
	try
	{
		sp2.addNumber(vect);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		sp2.addNumber(6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    std::cout << cyanCode << "Test Little Span" << resetCode << std::endl;
	Span sp3(5);
	sp3.addNumber(6);
	sp3.addNumber(3);
	sp3.addNumber(17);
	sp3.addNumber(9);
	sp3.addNumber(11);
	try
	{
		std::cout << sp3.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    std::cout << cyanCode << "Test Big Span" << resetCode << std::endl;
	Span sp4(20000);
	for (size_t i = 0; i < 20000; i++)
	{
		sp4.addNumber(i * 2);
	}
	try
	{
		std::cout << sp4.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << sp4.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}