/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:12:31 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/20 10:37:09 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm ;

class Bureaucrat
{
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		Bureaucrat(void);
		Bureaucrat(Bureaucrat const & bureaucrat);
		Bureaucrat(const std::string name, int grade);
		Bureaucrat &operator=(Bureaucrat const &bureaucrat);
		~Bureaucrat(void);
		const std::string	getName(void) const;
		int					getGrade(void) const;
		void				setGrade(int grade);
		void				increment(void);
		void				decrement(void);
		void				signForm(AForm &form);
		void				executeForm(AForm const & form);
	private:
		const std::string 	_name;
		int					_grade;	
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &bureaucrat);

#endif