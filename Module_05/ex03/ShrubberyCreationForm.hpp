/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:08:37 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/18 14:43:40 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm :  public AForm
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm(ShrubberyCreationForm const &shrubberycreationform);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &shrubberycreationform);
		~ShrubberyCreationForm(void);
		void do_execution(void) const; 
	private:
		std::string _target;

};

#endif