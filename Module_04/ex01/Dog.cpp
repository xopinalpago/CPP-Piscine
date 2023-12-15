/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:13:44 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/14 11:23:18 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal(), _type("Dog")
{
	std::cout << "Dog default constructor called." << std::endl;
	this->_brain = new Brain();
	return ;
}

Dog::Dog(Dog const &dog) : Animal(dog)
{
	std::cout << "Dog copy constructor called." << std::endl;
	this->_brain = new Brain(*dog._brain);
	this->_type = dog._type;
	return ;
}

Dog &Dog::operator=(Dog const &dog)
{
	std::cout << "Dog copy assignment operator called." << std::endl;
	if (this == &dog)
		return (*this);
	this->_type = dog._type;
	delete this->_brain;
	this->_brain = new Brain(*dog._brain);	
	return (*this);
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog destructor called." << std::endl;
	return ;
}

void Dog::makeSound(void) const
{
    std::cout << "WAF WAF" << std::endl;
}

std::string Dog::getType(void) const
{
	return (this->_type);
}

Brain *Dog::getBrain(void) const
{
    return (this->_brain);
}
