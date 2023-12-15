/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:31:47 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/04 11:02:59 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void HumanB::SetName(std::string str)
{
	this->_name = str;
	return ;
}

std::string HumanB::GetName(void) const
{
	return (this->_name);
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return ;
}

void HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	return ;
}