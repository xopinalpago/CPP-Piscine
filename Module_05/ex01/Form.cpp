/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:24:07 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/20 10:58:29 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name(), _is_sign(false), _sign_it(1), _exec_it(1)
{
	return ;
}

Form::Form(const std::string name, const int sign_it, const int exec_it) : _name(name), _sign_it(sign_it), _exec_it(exec_it)
{
    if (sign_it > 150 || exec_it > 150)
        throw Form::GradeTooLowException();
    else if (sign_it < 1 || exec_it < 1)
        throw Form::GradeTooHighException();
    else
	{
        this->_is_sign = false;
	}
	return ;
}

Form::Form(Form const &form) : _name(form._name), _is_sign(form._is_sign), _sign_it(form._sign_it), _exec_it(form._exec_it)
{
	return ;
}

Form &Form::operator=(Form const &form)
{
	if (this == &form)
		return (*this);
	this->_is_sign = form._is_sign;
	return (*this);
}

Form::~Form(void)
{
	return ;
}

std::string Form::getName(void) const
{
	return (this->_name);
}

bool Form::getIsSign(void) const
{
	return (this->_is_sign);
}

int Form::getSignIt(void) const
{
	return (this->_sign_it);
}

int Form::getExecIt(void) const
{
	return (this->_exec_it);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade to sign or execute too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade to sign or execute too low!");
}

const char *Form::AlreadySigned::what() const throw()
{
	return ("The form has already been signed!");
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getSignIt())
	{
		if (this->_is_sign == false)
			this->_is_sign = true;
		else
			throw Form::AlreadySigned();
	}
	else
		throw Form::GradeTooLowException();
	return ;
}

std::ostream &operator<<(std::ostream &o, Form const &form)
{
	o << "Form name : " << form.getName() << ", is signed : " << form.getIsSign()
	<< ", grade required to sign it : " << form.getSignIt()
	<< ", grade required to execute it : " << form.getExecIt() << ".";
	return (o);
}
