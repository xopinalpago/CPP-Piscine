/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:45:02 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/13 09:30:02 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"

class ICharacter ;

class AMateria
{
	protected:
		std::string _type;		
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const &amateria);
		AMateria &operator=(AMateria const &amateria);
		virtual ~AMateria(void);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif