/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:13:37 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/12 11:24:56 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class AAnimal
{
	public:
		AAnimal(void);
		AAnimal(AAnimal const &aanimal);
		AAnimal &operator=(AAnimal const &aanimal);
		virtual ~AAnimal(void);
		virtual void 		makeSound(void) const = 0;
		virtual std::string getType(void) const;
	protected:
		std::string _type;
};

#endif