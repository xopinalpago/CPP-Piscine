/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:56:06 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/08 15:19:20 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hp, int ep, int ad);
		ClapTrap(ClapTrap const &claptrap);
		ClapTrap &operator=(ClapTrap const &claptrap);
		~ClapTrap(void);
		void		attack(const std::string& target);
		void 		takeDamage(unsigned int amount);
		void 		beRepaired(unsigned int amount);
		void		setAttackDamage(int attack_damage);
		std::string	getName(void) const;
		int			getAttackDamage(void) const;
		int			getEnergyPoints(void) const;
		int			getHitPoints(void) const;
	protected:
		std::string _name;
		int _hit_points;
		int _energy_points;
		int _attack_damage;
};

#endif
