/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:56:18 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/20 10:58:03 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat ;

class Form
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
		Form(void);
		Form(const std::string name, const int sign_it, const int exec_it);
		Form(Form const &form);
		Form &operator=(Form const &form);
		~Form(void);
		std::string getName(void) const;
		bool 		getIsSign(void) const;
		int 		getSignIt(void) const;
		int 		getExecIt(void) const;
		void 		beSigned(Bureaucrat &bureaucrat);
	private:
		const std::string 	_name;
		bool				_is_sign;
		const int			_sign_it;
		const int			_exec_it;
};

std::ostream &operator<<(std::ostream &o, Form const &form);

#endif