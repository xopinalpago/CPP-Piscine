/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:52:11 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/12 17:04:46 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &materiasource);
		MateriaSource &operator=(MateriaSource const &materiasource);
		~MateriaSource(void);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
	private:
		AMateria *_repertory[4];
};

#endif