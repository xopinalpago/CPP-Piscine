/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:59:46 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/11 11:09:01 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap() , FragTrap()
{
	std::cout << "DiamondTrap Default constructor called." << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", 100, 50, 30), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	std::cout << "DiamondTrap Default constructor called with name." << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &diamondtrap) : ClapTrap(diamondtrap), ScavTrap(diamondtrap), FragTrap(diamondtrap)
{
	std::cout << "DiamondTrap Copy constructor called." << std::endl;
	*this = diamondtrap;
	return ;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &diamondtrap)
{
	std::cout << "FragTrap Copy assignment operator called." << std::endl;
	if (this == &diamondtrap)
		return (*this);
	this->_name = diamondtrap.getName();
	this->_hit_points = diamondtrap.getHitPoints();
	this->_energy_points = diamondtrap.getEnergyPoints();
	this->_attack_damage = diamondtrap.getAttackDamage();
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called." << std::endl;
	return ;
}

void DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap: " << this->_name << " | ClapTrap: " << ClapTrap::_name << std::endl;
}

std::string	DiamondTrap::getName(void) const
{
	return (this->_name);
}
