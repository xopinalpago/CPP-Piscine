/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:11:38 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/06 17:12:04 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called." << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap Default constructor called with name." << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &scavtrap) : ClapTrap(scavtrap)
{
	std::cout << "ScavTrap Copy constructor called." << std::endl;
	*this = scavtrap;
	return ;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &scavtrap)
{
	std::cout << "ScavTrap Copy assignment operator called." << std::endl;
	if (this == &scavtrap)
		return (*this);
	this->_name = scavtrap.getName();
	this->_hit_points = scavtrap.getHitPoints();
	this->_energy_points = scavtrap.getEnergyPoints();
	this->_attack_damage = scavtrap.getAttackDamage();
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called." << std::endl;
	return ;
}

void ScavTrap::attack(const std::string& target)
{
	if (!this->_hit_points || !this->_energy_points)
	{
		std::cout << "ScavTrap " << this->_name << " died!" << std::endl;
		return ;
	}
	this->_energy_points--;
	if (this->_energy_points < 0)
		this->_energy_points = 0;
	std::cout << "ScavTrap " << this->_name << " attacks " << target;
	std::cout << " causing " << this->_attack_damage << " points of damage!" << std::endl;
	return ;
}

void ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}
