/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:40:35 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/11 16:54:54 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called." << std::endl;
    for (int i = 0; i < _nb_ideas; i++)
    {
        this->_ideas[i] = "";
    }
	return ;
}

Brain::Brain(Brain const &brain)
{
	std::cout << "Brain copy constructor called." << std::endl;
    for (int i = 0; i < _nb_ideas; i++)
    {
        this->_ideas[i] = brain._ideas[i];
    }
	return ;
}

Brain &Brain::operator=(Brain const &brain)
{
	std::cout << "Brain copy assignment operator called." << std::endl;
	if (this == &brain)
		return (*this);
    for (int i = 0; i < _nb_ideas; i++)
    {
        this->_ideas[i] = brain._ideas[i];
    }
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called." << std::endl; 
	return ;
}

void Brain::setIdeas(int i, std::string idea)
{
    if (i < 0 || i > this->_nb_ideas)
        return ;
    this->_ideas[i] = idea;
    return ;
}

std::string Brain::getIdeas(int i)
{
    if (i < 0 || i > this->_nb_ideas)
        return (NULL);
    return (this->_ideas[i]);
}
