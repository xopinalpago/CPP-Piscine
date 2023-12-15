/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:13:31 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/12 11:24:53 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal(void) : _type("AAnimal")
{
	std::cout << "AAnimal default constructor called." << std::endl; 
	return ;
}

AAnimal::AAnimal(AAnimal const &aanimal)
{
	std::cout << "AAnimal copy constructor called." << std::endl;
	this->_type = aanimal._type;
	return ;
}

AAnimal &AAnimal::operator=(AAnimal const &aanimal)
{
	std::cout << "AAnimal copy assignment operator called." << std::endl;
	if (this == &aanimal)
		return (*this);
	this->_type = aanimal._type;
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called." << std::endl;
	return ;
}

void AAnimal::makeSound(void) const
{
    std::cout << "..." << std::endl;
}

std::string AAnimal::getType(void) const
{
	return (this->_type);
}
