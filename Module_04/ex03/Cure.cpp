/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:15:27 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/14 11:46:30 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	// std::cout << "Cure default constructor called." << std::endl; 
	return ;
}

Cure::Cure(Cure const &cure) : AMateria(cure)
{
	// std::cout << "Cure copy constructor called." << std::endl;
	this->_type = cure._type;
	return ;	
}

Cure &Cure::operator=(Cure const &cure)
{
	// std::cout << "Cure copy assignment operator called." << std::endl;
	if (this == &cure)
		return (*this);
	this->_type = cure._type;
	return (*this);
}

Cure::~Cure(void)
{
	// std::cout << "Cure destructor called." << std::endl;
	return ;
}

Cure *Cure::clone(void) const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
