/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:08:06 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/20 11:19:56 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::string cyanCode = "\033[1;36m";
	std::string resetCode = "\033[0m";
	//Classic
	Bureaucrat b0("b0", 11);
	Form f0("f0", 10, 50);	
	std::cout << cyanCode << "-------Initialisation-------" << resetCode << std::endl;
	std::cout << b0 << std::endl;
	std::cout << f0 << std::endl;
	std::cout << cyanCode << "       Test Error Initialisation" << resetCode << std::endl;
	try
	{
		Form f1("f1", -2, 50);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form f2("f2", 10, 222);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << cyanCode << "       Test Signed" << resetCode << std::endl;
	b0.signForm(f0);
	Bureaucrat b1("b1", 5);
	b1.signForm(f0);
	Bureaucrat b2("b2", 2);
	b2.signForm(f0);
	return (0);
}