/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:08:37 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/18 14:50:48 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm :  public AForm
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const target);
		PresidentialPardonForm(PresidentialPardonForm const &presidentialpardonform);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &presidentialpardonform);
		~PresidentialPardonForm(void);
		void do_execution(void) const;
	private:
		std::string _target;
};

#endif