/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:17:38 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/18 14:59:01 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm(), _target("")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &presidentialpardonform) : AForm(presidentialpardonform.getName(), presidentialpardonform.getSignIt(), presidentialpardonform.getExecIt())
{
	this->_target = presidentialpardonform._target;
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &presidentialpardonform)
{	
	if (this == &presidentialpardonform)
		return (*this);
	AForm::operator=(presidentialpardonform);
	this->_target = presidentialpardonform._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;	
}

void PresidentialPardonForm::do_execution(void) const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    return ;
}
