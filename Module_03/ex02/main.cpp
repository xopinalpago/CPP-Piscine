/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:59:16 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/06 18:40:17 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap Rems("Rems");
	ClapTrap Gaga("Gaga");
	ScavTrap Kiki("Kiki");
	ScavTrap Nico("Nico");
	FragTrap Alix("Alix");
	
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

	Alix.highFivesGuys();
	Kiki.attack(Alix.getName());
	Alix.takeDamage(Kiki.getAttackDamage());
	Alix.beRepaired(100);

	Alix.attack(Gaga.getName());
	Gaga.takeDamage(Alix.getAttackDamage());
	Gaga.beRepaired(2);
	return (0);
}