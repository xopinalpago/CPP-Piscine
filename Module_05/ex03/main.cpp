/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:08:06 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/20 11:47:41 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	std::string cyanCode = "\033[1;36m";
	std::string redCode = "\033[0;31m";
	std::string resetCode = "\033[0m";

	try
	{
		std::cout << redCode << "-------ShrubberyCreationForm-------" << resetCode << std::endl;
		std::cout << cyanCode << "       Sign test" << resetCode << std::endl;
		Intern i0;
		AForm *s0;
		Bureaucrat b0("b0", 150);
		s0 = i0.makeForm("shrubbery creation", "target0");
		std::cout << b0 << std::endl;
		b0.signForm(*s0);
		b0.executeForm(*s0);
		std::cout << cyanCode << "       Execute test" << resetCode << std::endl;
		Bureaucrat b1("b1", 140);
		std::cout << b1 << std::endl;
		b1.signForm(*s0);
		b1.executeForm(*s0);
		std::cout << cyanCode << "       Execution" << resetCode << std::endl;
		Bureaucrat b2("b2", 10);
		std::cout << b2 << std::endl;
		b2.executeForm(*s0);
		delete s0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << std::endl;
		std::cout << redCode << "-------RobotomyRequestForm-------" << resetCode << std::endl;
		std::cout << cyanCode << "       Sign test" << resetCode << std::endl;
		Intern i1;
		AForm *r0;
		Bureaucrat b3("b3", 100);
		r0 = i1.makeForm("robotomy request", "target1");
		std::cout << b3 << std::endl;
		b3.signForm(*r0);
		b3.executeForm(*r0);
		std::cout << cyanCode << "       Execute test" << resetCode << std::endl;
		Bureaucrat b4("b4", 65);
		std::cout << b4 << std::endl;
		b4.signForm(*r0);
		b4.executeForm(*r0);
		std::cout << cyanCode << "       Execution" << resetCode << std::endl;
		Bureaucrat b5("b5", 25);
		std::cout << b5 << std::endl;
		b5.executeForm(*r0);
		delete r0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << std::endl;
		std::cout << redCode << "-------PresidentialPardonForm-------" << resetCode << std::endl;
		std::cout << cyanCode << "       Sign test" << resetCode << std::endl;
		Intern i2;
		AForm *p0;
		Bureaucrat b6("b6", 111);
		p0 = i2.makeForm("presidential pardon", "target2");
		std::cout << b6 << std::endl;
		b6.signForm(*p0);
		b6.executeForm(*p0);
		std::cout << cyanCode << "       Execute test" << resetCode << std::endl;
		Bureaucrat b7("b7", 10);
		std::cout << b7 << std::endl;
		b7.signForm(*p0);
		b7.executeForm(*p0);
		std::cout << cyanCode << "       Execution" << resetCode << std::endl;
		Bureaucrat b8("b8", 4);
		std::cout << b8 << std::endl;
		b8.executeForm(*p0);
		delete p0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::cout << std::endl;
		std::cout << redCode << "-------Wrong Form-------" << resetCode << std::endl;
		std::cout << cyanCode << "       Sign test" << resetCode << std::endl;
		Intern i3;
		AForm *test;
		test = i3.makeForm("asfsadfs", "target3");
		delete test;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}