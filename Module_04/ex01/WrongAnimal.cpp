/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:13:31 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/11 12:34:43 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called." << std::endl; 
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &wronganimal)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	this->_type = wronganimal._type;
	return ;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &wronganimal)
{
	std::cout << "WrongAnimal copy assignment operator called." << std::endl;
	if (this == &wronganimal)
		return (*this);
	this->_type = wronganimal._type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Animal destructor called." << std::endl;
	return ;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "..." << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}
