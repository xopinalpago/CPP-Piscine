/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:14:05 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/14 11:22:27 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal(), _type("Cat")
{
	std::cout << "Cat default constructor called." << std::endl; 
	return ;
}

Cat::Cat(Cat const &cat) : Animal(cat)
{
	std::cout << "Cat copy constructor called." << std::endl;
	this->_type = cat._type;
	return ;
}

Cat &Cat::operator=(Cat const &cat)
{
	std::cout << "Cat copy assignment operator called." << std::endl;
	if (this == &cat)
		return (*this);
	this->_type = cat._type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called." << std::endl;
	return ;
}

void Cat::makeSound(void) const
{
    std::cout << "MIAOU" << std::endl;
}

std::string Cat::getType(void) const
{
	return (this->_type);
}
