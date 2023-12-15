/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:13:31 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/08 16:16:24 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
	std::cout << "Animal default constructor called." << std::endl; 
	return ;
}

Animal::Animal(Animal const &animal)
{
	std::cout << "Animal copy constructor called." << std::endl;
	this->_type = animal._type;
	return ;
}

Animal &Animal::operator=(Animal const &animal)
{
	std::cout << "Animal copy assignment operator called." << std::endl;
	if (this == &animal)
		return (*this);
	this->_type = animal._type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called." << std::endl;
	return ;
}

void Animal::makeSound(void) const
{
    std::cout << "..." << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->_type);
}
