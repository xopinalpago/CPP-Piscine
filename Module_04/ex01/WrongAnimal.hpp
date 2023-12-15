/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:13:37 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/11 15:03:17 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &wronganimal);
		WrongAnimal &operator=(WrongAnimal const &wronganimal);
		~WrongAnimal(void);
		void 		makeSound(void) const;
		std::string getType(void) const;
	protected:
		std::string _type;
};

#endif