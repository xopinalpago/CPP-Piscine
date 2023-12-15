/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:13:37 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/13 14:22:08 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal(void);
		Animal(Animal const &animal);
		Animal &operator=(Animal const &animal);
		virtual ~Animal(void);
		virtual void 		makeSound(void) const;
		virtual std::string getType(void) const;
	protected:
		std::string _type;
};

#endif