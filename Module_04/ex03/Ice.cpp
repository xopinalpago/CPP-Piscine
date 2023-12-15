/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:15:27 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/14 11:46:51 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	// std::cout << "Ice default constructor called." << std::endl; 
	return ;
}

Ice::Ice(Ice const &ice) : AMateria(ice)
{
	// std::cout << "Ice copy constructor called." << std::endl;
	this->_type = ice._type;
	return ;	
}

Ice &Ice::operator=(Ice const &ice)
{
	// std::cout << "Ice copy assignment operator called." << std::endl;
	if (this == &ice)
		return (*this);
	this->_type = ice._type;
	return (*this);
}

Ice::~Ice(void)
{
	// std::cout << "Ice destructor called." << std::endl;
	return ;
}

Ice *Ice::clone(void) const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
