/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:59:16 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/11 11:11:05 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Rems("Rems");
	ClapTrap Gaga("Gaga");
	ClapTrap test;

	Rems.attack(Gaga.getName());
	Gaga.takeDamage(Rems.getAttackDamage());
	Rems.setAttackDamage(3);
	Rems.attack(Gaga.getName());
	Gaga.takeDamage(Rems.getAttackDamage());
	Gaga.beRepaired(2);
	Gaga.setAttackDamage(12);
	Gaga.attack(Rems.getName());
	Rems.takeDamage(Gaga.getAttackDamage());
	Rems.beRepaired(2);

	for (int i = 0; i < 9; i++)
	{
		Gaga.beRepaired(2);
	}

	return (0);
}