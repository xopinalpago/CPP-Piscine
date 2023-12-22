/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:08:06 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/20 10:35:37 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::string cyanCode = "\033[1;36m";
	std::string resetCode = "\033[0m";

	std::cout << cyanCode << "-------Initialisation-------" << resetCode << std::endl;
	std::cout << cyanCode << "       High Grade" << resetCode << std::endl;
	try
	{	
		Bureaucrat b1("b1", -5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << cyanCode << "       Low Grade" << resetCode << std::endl;
	try
	{	
		Bureaucrat b2("b2", 200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << cyanCode << "       Set Grade" << resetCode << std::endl;
	Bureaucrat b3;
	try
	{	
		b3.setGrade(250);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}	
	
	Bureaucrat b0("b0", 10);
	std::cout << cyanCode << "-------Initial Grade-------" << resetCode << std::endl;
	std::cout << b0 << std::endl;
	std::cout << cyanCode << "       Incrementation" << resetCode << std::endl;
	try
	{
		b0.increment();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << b0 << std::endl;
	std::cout << cyanCode << "       Decrementation" << resetCode << std::endl;
	try
	{
		b0.decrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << b0 << std::endl;
	
	std::cout << std::endl;
	std::cout << cyanCode << "-------Limit Test Min-------" << resetCode << std::endl;
	Bureaucrat bmax("bmax", 1);
	std::cout << bmax << std::endl;
	std::cout << cyanCode << "       Incrementation" << resetCode << std::endl;
	try
	{
		bmax.increment();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << cyanCode << "-------Limit Test Max-------" << resetCode << std::endl;
	Bureaucrat bmin("bmin", 150);
	std::cout << bmin << std::endl;
	std::cout << cyanCode << "       Decrementation" << resetCode << std::endl;
	try
	{
		bmin.decrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}