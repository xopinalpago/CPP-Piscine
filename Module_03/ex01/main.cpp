/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:59:16 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/08 14:35:09 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap Rems("Rems");
	ClapTrap Gaga("Gaga");
	ScavTrap Kiki("Kiki");
	ScavTrap Nico("Nico");

	Rems.attack(Kiki.getName());
	Kiki.takeDamage(Rems.getAttackDamage());
	
	Rems.setAttackDamage(3);
	Rems.attack(Kiki.getName());
	Kiki.takeDamage(Rems.getAttackDamage());
	
	Kiki.beRepaired(2);
	Kiki.attack(Rems.getName());
	Rems.takeDamage(Kiki.getAttackDamage());
	Rems.beRepaired(2);

	Kiki.guardGate();
	Kiki.attack(Nico.getName());
	Nico.takeDamage(Kiki.getAttackDamage());
	Nico.beRepaired(10);
	return (0);
}