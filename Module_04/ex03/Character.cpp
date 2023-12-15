/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:24:31 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/14 11:44:57 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : ICharacter(), _name("")
{
	// std::cout << "Character default constructor called." << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;	
	return ;
}

Character::Character(std::string name) : ICharacter(), _name(name)
{
	// std::cout << "Character parametric constructor called." << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;	
	return ;
}

Character::Character(Character const &character)
{
	// std::cout << "Character copy constructor called." << std::endl;
	this->_name = character._name;
    for (int i = 0; i < 4; ++i)
    {
        if (character._inventory[i])
            this->_inventory[i] = character._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }
	return ;
}

Character &Character::operator=(Character const &character)
{
	// std::cout << "Character copy assignment operator called." << std::endl;
	if (this == &character)
		return (*this);
	this->_name = character._name;
    for (int i = 0 ; i < 4 ; i++)
    {
        if (this->_inventory[i])
        {
            delete this->_inventory[i];
            this->_inventory[i] = NULL;
        }
        if (character._inventory[i])
            this->_inventory[i] = character._inventory[i]->clone();
    }	
	return (*this);
}

Character::~Character(void)
{
	// std::cout << "Character destructor called." << std::endl;
    for (int i = 0 ; i < 4 ; i++)
	{
        if (this->_inventory[i])
        {
            delete this->_inventory[i];
            this->_inventory[i] = NULL;
        }
	}
	return ;
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{	
			this->_inventory[i] = m;
			std::cout << m->getType() << " Equipment." << std::endl;
			return ;
		}
	}
	std::cout << "Full Inventory." << std::endl;
	return ;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Wrong Index Unequip." << std::endl;
		return ;
	}
	if (this->_inventory[idx])
	{
		std::cout << this->_inventory[idx]->getType() << " Unequipment." << std::endl;
		this->_inventory[idx] = NULL;
	}
	return ;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Wrong Index Use." << std::endl;
		return ;
	}
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << "No materia to use at index " << idx << "." << std::endl;
	return ;
}

AMateria *Character::leaveMateria(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Wrong Index Leave." << std::endl;
		return (NULL);
	}
    if (this->_inventory[idx])
	{
        return (this->_inventory[idx]);
	}
	return (NULL);
}
