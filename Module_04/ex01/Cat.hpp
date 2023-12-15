/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:14:13 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/15 10:50:08 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &cat);
		Cat &operator=(Cat const &cat);
		~Cat(void);
		void 		makeSound(void) const;
		std::string getType(void) const;
		Brain 		*getBrain(void) const;
	protected:
        std::string _type;
	private:
		Brain 		*_brain;
};

#endif