/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:03:57 by rmeriau           #+#    #+#             */
/*   Updated: 2023/11/28 17:42:14 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	public:
			Harl(void);
			~Harl(void);
			void complain(std::string level);
	private:
			void debug(void) const;
			void info(void) const;
			void warning(void) const;
			void error(void) const;
			typedef void (Harl::*ft)(void) const;
			ft ptr_fct[4];
			
};

#endif