/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:13:55 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/12 11:29:20 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		Dog(void);
		Dog(Dog const &dog);
		Dog &operator=(Dog const &dog);
		~Dog(void);
		void 		makeSound(void) const;
		std::string getType(void) const;
		Brain 		*getBrain(void) const;
	protected:
        std::string _type;
		Brain 		*_brain;
};

#endif