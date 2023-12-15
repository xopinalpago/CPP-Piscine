/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:14:05 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/14 11:24:19 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal(), _type("WrongCat")
{
	std::cout << "WrongCat default constructor called." << std::endl; 
	return ;
}

WrongCat::WrongCat(WrongCat const &wrongcat) : WrongAnimal(wrongcat)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	this->_type = wrongcat._type;
	return ;
}

WrongCat &WrongCat::operator=(WrongCat const &wrongcat)
{
	std::cout << "WrongCat copy assignment operator called." << std::endl;
	if (this == &wrongcat)
		return (*this);
	this->_type = wrongcat._type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called." << std::endl;
	return ;
}

void WrongCat::makeSound(void) const
{
    std::cout << "MIAOU" << std::endl;
}

std::string WrongCat::getType(void) const
{
	return (this->_type);
}
