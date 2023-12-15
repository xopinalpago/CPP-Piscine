/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:00:40 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/13 09:59:51 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name(), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap Default constructor called." << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap Parametric constructor called." << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name, int hp, int ep, int ad) : _name(name), _hit_points(hp), _energy_points(ep), _attack_damage(ad)
{
	std::cout << "ClapTrap Parametric constructor called." << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &claptrap)
{
	std::cout << "ClapTrap Copy constructor called." << std::endl;
	this->_name = claptrap._name;
	this->_hit_points = claptrap._hit_points;
	this->_energy_points = claptrap._energy_points;
	this->_attack_damage = claptrap._attack_damage;
	return ;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &claptrap)
{
	std::cout << "ClapTrap Copy assignment operator called." << std::endl;
	if (this == &claptrap)
		return (*this);
	this->_name = claptrap._name;
	this->_hit_points = claptrap._hit_points;
	this->_energy_points = claptrap._energy_points;
	this->_attack_damage = claptrap._attack_damage;
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called." << std::endl;
	return ;
}

void ClapTrap::attack(const std::string& target)
{
	if (!this->_hit_points || !this->_energy_points)
	{
		std::cout << "ClapTrap " << this->_name << " died!" << std::endl;
		return ;
	}
	this->_energy_points--;
	if (this->_energy_points < 0)
		this->_energy_points = 0;
	std::cout << "ClapTrap " << this->_name << " attacks " << target;
	std::cout << " causing " << this->_attack_damage << " points of damage!" << std::endl;
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->_hit_points || !this->_energy_points)
	{
		std::cout << "ClapTrap " << this->_name << " died!" << std::endl;
		return ;
	}
	this->_hit_points -= amount;
	if (this->_hit_points < 0)
		this->_hit_points = 0;
	std::cout << "ClapTrap " << this->_name << " has " << this->_hit_points << " hit points left." << std::endl;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_hit_points || !this->_energy_points)
	{
		std::cout << "ClapTrap " << this->_name << " died!" << std::endl;
		return ;
	}
	this->_energy_points--;
	if (this->_energy_points < 0)
		this->_energy_points = 0;
	this->_hit_points += amount;
	std::cout << "ClapTrap " << this->_name << " repairs " << amount << " of hit points, he now has ";
	std::cout << this->_hit_points << " hit points." << std::endl;
	return ;
}

void ClapTrap::setAttackDamage(int attack_damage)
{
	this->_attack_damage = attack_damage;
	return ;
}

int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attack_damage);
}

int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energy_points);
}

int	ClapTrap::getHitPoints(void) const
{
	return (this->_hit_points);
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}
