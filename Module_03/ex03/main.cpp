/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:59:16 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/13 10:01:33 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	ClapTrap 	Rems("Rems");
	ClapTrap 	Gaga("Gaga");
	ScavTrap 	Kiki("Kiki");
	ScavTrap 	Nico("Nico");
	FragTrap 	Alix("Alix");
	DiamondTrap Mama("Mama");
	
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

	Mama.whoAmI();
	Mama.attack(Kiki.getName());
    Kiki.takeDamage(Mama.getAttackDamage());
    Mama.beRepaired(25);
    Mama.guardGate();
    Mama.highFivesGuys();
	return (0);
}
