/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:16:01 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/18 17:11:16 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		class NotCreatedForm : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		Intern(void);
		Intern(Intern const &intern);
		Intern &operator=(Intern const &intern);
		~Intern(void);
		AForm *makeForm(std::string name, std::string target);
	private:
		AForm *SCF(std::string target);
		AForm *RRF(std::string target);
		AForm *PPF(std::string target);
		typedef AForm *(Intern::*ft)(std::string target);
		ft ptr_fct[3];
};

#endif