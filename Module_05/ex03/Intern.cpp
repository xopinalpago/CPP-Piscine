/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:18:53 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/20 11:47:05 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	ptr_fct[0] = &Intern::SCF;
	ptr_fct[1] = &Intern::RRF;
	ptr_fct[2] = &Intern::PPF;
	return ;
}

Intern::Intern(Intern const &intern)
{
	*this = intern;
	return ;
}

Intern &Intern::operator=(Intern const &intern)
{
	(void)intern;
	return (*this);
}

Intern::~Intern(void)
{
	return ;
}

AForm *Intern::SCF(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::RRF(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm *Intern::PPF(std::string target)
{
	return (new PresidentialPardonForm(target));
}

const char *Intern::NotCreatedForm::what() const throw()
{
	return ("Intern can't create this Form...");
}

AForm *Intern::makeForm(std::string name, std::string target)
{
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

    for (int i = 0; i < 3; i++)
	{
        if (forms[i] == name)
		{
			std::cout << "Intern creates " << name << std::endl;
            return ((this->*ptr_fct[i])(target));
		}
	}
	throw (Intern::NotCreatedForm());
	return NULL;
}

