/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:24:07 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/20 11:22:51 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name(), _is_sign(false), _sign_it(1), _exec_it(1)
{
	return ;
}

AForm::AForm(const std::string name, const int sign_it, const int exec_it) : _name(name), _sign_it(sign_it), _exec_it(exec_it)
{
    if (sign_it > 150 || exec_it > 150)
        throw AForm::GradeTooLowException();
    else if (sign_it < 1 || exec_it < 1)
        throw AForm::GradeTooHighException();
    else
	{
        this->_is_sign = false;
	}
	return ;
}

AForm::AForm(AForm const &aform) : _name(aform._name), _is_sign(aform._is_sign), _sign_it(aform._sign_it), _exec_it(aform._exec_it)
{
	return ;
}

AForm &AForm::operator=(AForm const &aform)
{
	if (this == &aform)
		return (*this);
	this->_is_sign = aform._is_sign;
	return (*this);
}

AForm::~AForm(void)
{
	return ;
}

std::string AForm::getName(void) const
{
	return (this->_name);
}

bool AForm::getIsSign(void) const
{
	return (this->_is_sign);
}

int AForm::getSignIt(void) const
{
	return (this->_sign_it);
}

int AForm::getExecIt(void) const
{
	return (this->_exec_it);
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade to sign or execute too high!");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade to sign or execute too low!");
}

const char *AForm::AlreadySigned::what() const throw()
{
	return ("The form has already been signed!");
}

const char *AForm::NotSigned::what() const throw()
{
	return ("Form not signed!");
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getSignIt())
	{
		if (this->_is_sign == false)
			this->_is_sign = true;
		else
			throw AForm::AlreadySigned();
	}
	else
		throw AForm::GradeTooLowException();
	return ;
}

std::ostream &operator<<(std::ostream &o, AForm const &aform)
{
	o << "Form name : " << aform.getName() << ", is signed : " << aform.getIsSign()
	<< ", grade required to sign it : " << aform.getSignIt()
	<< ", grade required to execute it : " << aform.getExecIt() << ".";
	return (o);
}

void AForm::execute(Bureaucrat const &executor) const
{
	if (!this->getIsSign())
		throw AForm::NotSigned();
	else if (executor.getGrade() > this->getExecIt())
		throw AForm::GradeTooLowException();
	else
		this->do_execution();
	return ;
}