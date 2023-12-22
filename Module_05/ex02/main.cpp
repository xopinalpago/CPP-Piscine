/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:08:06 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/18 16:01:00 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::string cyanCode = "\033[1;36m";
	std::string redCode = "\033[0;31m";
	std::string resetCode = "\033[0m";

	std::cout << redCode << "-------ShrubberyCreationForm-------" << resetCode << std::endl;
	std::cout << cyanCode << "       Sign test" << resetCode << std::endl;
	Bureaucrat b0("b0", 150);
	ShrubberyCreationForm s0("s0");
	std::cout << b0 << std::endl;
	b0.signForm(s0);
	b0.executeForm(s0);
	std::cout << cyanCode << "       Execute test" << resetCode << std::endl;
	Bureaucrat b1("b1", 140);
	std::cout << b1 << std::endl;
	b1.signForm(s0);
	b1.executeForm(s0);
	std::cout << cyanCode << "       Execution" << resetCode << std::endl;
	Bureaucrat b2("b2", 10);
	std::cout << b2 << std::endl;
	b2.executeForm(s0);

	std::cout << std::endl;
	std::cout << redCode << "-------RobotomyRequestForm-------" << resetCode << std::endl;
	std::cout << cyanCode << "       Sign test" << resetCode << std::endl;
	Bureaucrat b3("b3", 100);
	RobotomyRequestForm r0("r0");
	std::cout << b3 << std::endl;
	b3.signForm(r0);
	b3.executeForm(r0);
	std::cout << cyanCode << "       Execute test" << resetCode << std::endl;
	Bureaucrat b4("b4", 65);
	std::cout << b4 << std::endl;
	b4.signForm(r0);
	b4.executeForm(r0);
	std::cout << cyanCode << "       Execution" << resetCode << std::endl;
	Bureaucrat b5("b5", 25);
	std::cout << b5 << std::endl;
	b5.executeForm(r0);

	std::cout << std::endl;
	std::cout << redCode << "-------PresidentialPardonForm-------" << resetCode << std::endl;
	std::cout << cyanCode << "       Sign test" << resetCode << std::endl;
	Bureaucrat b6("b6", 111);
	PresidentialPardonForm p0("p0");
	std::cout << b6 << std::endl;
	b6.signForm(p0);
	b6.executeForm(p0);
	std::cout << cyanCode << "       Execute test" << resetCode << std::endl;
	Bureaucrat b7("b7", 10);
	std::cout << b7 << std::endl;
	b7.signForm(p0);
	b7.executeForm(p0);
	std::cout << cyanCode << "       Execution" << resetCode << std::endl;
	Bureaucrat b8("b8", 4);
	std::cout << b8 << std::endl;
	b8.executeForm(p0);
	return (0);
}