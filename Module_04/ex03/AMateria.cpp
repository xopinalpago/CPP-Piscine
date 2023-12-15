/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:47:20 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/14 11:44:09 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	// std::cout << "AMateria default constructor called." << std::endl; 
	return ;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	// std::cout << "AMateria parametric constructor called." << std::endl; 
	return ;
}

AMateria::AMateria(AMateria const &amateria)
{
	// std::cout << "AMateria copy constructor called." << std::endl;
	this->_type = amateria._type;
	return ;
}

AMateria &AMateria::operator=(AMateria const &amateria)
{
	// std::cout << "AMateria copy assignment operator called." << std::endl;
	if (this == &amateria)
		return (*this);
	this->_type = amateria._type;
	return (*this);
}

AMateria::~AMateria(void)
{
	// std::cout << "AMateria destructor called." << std::endl;
	return ;
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target) 
{
    (void)target;
}
