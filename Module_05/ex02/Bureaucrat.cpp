/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:21:37 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/20 11:20:57 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name(""), _grade(0)
{
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->_grade = grade;
	}	
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat) : _name(bureaucrat._name)
{
	this->_grade = bureaucrat._grade;
	return ;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &bureaucrat)
{
	if (this == &bureaucrat)
		return (*this);
	this->_grade = bureaucrat._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

const std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);	
}

void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->_grade = grade;
	}	
	return ;
}

void Bureaucrat::increment(void)
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
	return ;
}

void Bureaucrat::decrement(void)
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
	return ;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade Too High!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low!");
}

void Bureaucrat::signForm(AForm &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    }
    catch (AForm::GradeTooLowException &e)
    {
        std::cout << this->_name << " couldn't sign ";
        std::cout << form.getName() << " because " << e.what() << std::endl;
    }
    catch (AForm::AlreadySigned &e)
    {
        std::cerr << e.what() << std::endl;
    }	
}

void Bureaucrat::executeForm(AForm const &form)
{
    try
    {
        form.execute(*this);
        std::cout << this->_name << " executed " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << this->_name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return (o);
}
