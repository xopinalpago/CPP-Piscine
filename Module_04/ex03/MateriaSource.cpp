/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:00:33 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/14 11:56:08 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	// std::cout << "MateriaSource default constructor called." << std::endl;
	for (int i = 0; i < 4; i++)
		this->_repertory[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &materiasource)
{
	// std::cout << "MateriaSource copy constructor called." << std::endl;
    for (int i = 0; i < 4; ++i)
    {
        if (materiasource._repertory[i])
            this->_repertory[i] = materiasource._repertory[i]->clone();
        else
            this->_repertory[i] = NULL;
    }
	return ;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &materiasource)
{
	// std::cout << "MateriaSource copy assignment operator called." << std::endl;
	if (this == &materiasource)
		return (*this);
    for (int i = 0 ; i < 4 ; i++)
    {
        if (this->_repertory[i])
        {
            delete this->_repertory[i];
            this->_repertory[i] = NULL;
        }
        if (materiasource._repertory[i])
            this->_repertory[i] = materiasource._repertory[i]->clone();
    }	
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	// std::cout << "MateriaSource destructor called." << std::endl;
    for (int i = 0 ; i < 4 ; i++)
		delete this->_repertory[i];
	return ;
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!this->_repertory[i])
		{
			this->_repertory[i] = m;
			std::cout << "Materia " << m->getType() << " learned." << std::endl;
			return ;
		}
	}
	delete m;
	std::cout << "Full Repertory." << std::endl;
	return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type.size())
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_repertory[i] && this->_repertory[i]->getType() == type)
			{
				std::cout << "Materia " << type << " created." << std::endl;
				return (this->_repertory[i]->clone());
			}
		}
		std::cout << "Materia " << type << " not found." << std::endl;
	}
	return (0);
}
