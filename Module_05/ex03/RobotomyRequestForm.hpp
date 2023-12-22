/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:08:37 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/18 14:43:37 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>
#include <ctime>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm :  public AForm
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const target);
		RobotomyRequestForm(RobotomyRequestForm const &robotomyrequestform);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &robotomyrequestform);
		~RobotomyRequestForm(void);
		void do_execution(void) const;
	private:
		std::string _target;

};

#endif