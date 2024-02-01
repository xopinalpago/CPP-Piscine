/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:54:48 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/30 17:54:13 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <cstdlib>
#include <limits>

class RPN
{
	public:
		RPN(void);
		RPN(RPN const &copy);
		RPN &operator=(RPN const &copy);
		~RPN(void);
		int do_operation(std::string op_data);
	private:
		std::stack<double> _data;
};

#endif
