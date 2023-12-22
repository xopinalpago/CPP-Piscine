/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:17:38 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/18 14:57:27 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm(), _target("")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &robotomyrequestform) : AForm(robotomyrequestform.getName(), robotomyrequestform.getSignIt(), robotomyrequestform.getExecIt())
{
	this->_target = robotomyrequestform._target;
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &robotomyrequestform)
{	
	if (this == &robotomyrequestform)
		return (*this);
	AForm::operator=(robotomyrequestform);
	this->_target = robotomyrequestform._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;	
}

void RobotomyRequestForm::do_execution(void) const
{
    std::cout << "Tatatatatatatat..." << std::endl;
    std::srand((unsigned int)time(0));
    if (std::rand() % 2 == 1)
        std::cout << this->_target << " has been robotomized successfully!!" << std::endl;
    else
        std::cout << this->_target << " robotomisation failed!!" << std::endl;
    return ;
}
