/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:31:50 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/04 11:02:55 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void 		setWeapon(Weapon &weapon);
		void 		SetName(std::string);
		std::string GetName(void) const;
		void		attack(void) const;
	private:
		std::string _name;
		Weapon		*_weapon;
};

#endif