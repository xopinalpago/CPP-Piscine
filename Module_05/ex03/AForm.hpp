/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:56:18 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/20 11:23:32 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat ;

class AForm
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
		class AlreadySigned : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class NotSigned : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		AForm(void);
		AForm(const std::string name, const int sign_it, const int exec_it);
		AForm(AForm const &aform);
		AForm &operator=(AForm const &aform);
		virtual ~AForm(void);
		std::string 	getName(void) const;
		bool 			getIsSign(void) const;
		int 			getSignIt(void) const;
		int 			getExecIt(void) const;
		void 			beSigned(Bureaucrat &bureaucrat);
		void 			execute(Bureaucrat const & executor) const;
		virtual void 	do_execution(void) const = 0; 
	private:
		const std::string 	_name;
		bool				_is_sign;
		const int			_sign_it;
		const int			_exec_it;
};

std::ostream &operator<<(std::ostream &o, AForm const &aform);

#endif