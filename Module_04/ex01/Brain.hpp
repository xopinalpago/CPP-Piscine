/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:38:15 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/11 17:13:48 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(Brain const &brain);
		Brain &operator=(Brain const &brain);
		~Brain(void);
		void 		setIdeas(int i, std::string idea);
		std::string getIdeas(int i);
	private:
		static const int _nb_ideas = 100;
		std::string _ideas[_nb_ideas];
};

#endif