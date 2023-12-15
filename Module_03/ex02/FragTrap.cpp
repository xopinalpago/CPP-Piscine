/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:11:38 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/08 14:39:14 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap Default constructor called." << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap Default constructor called with name." << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &fragtrap) : ClapTrap(fragtrap)
{
	std::cout << "FragTrap Copy constructor called." << std::endl;
	*this = fragtrap;
	return ;
}

FragTrap &FragTrap::operator=(FragTrap const &fragtrap)
{
	std::cout << "FragTrap Copy assignment operator called." << std::endl;
	if (this == &fragtrap)
		return (*this);
	this->_name = fragtrap.getName();
	this->_hit_points = fragtrap.getHitPoints();
	this->_energy_points = fragtrap.getEnergyPoints();
	this->_attack_damage = fragtrap.getAttackDamage();
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called." << std::endl;
	return ;
}

void FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap " << this->_name << " does a high fives to everyone!" << std::endl;
}
