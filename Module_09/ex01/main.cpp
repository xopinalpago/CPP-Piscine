/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:13:08 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/30 16:29:56 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	RPN rpn;
	
	if (argc != 2)
		return (std::cout << "Error" << std::endl, 1);
	rpn.do_operation(argv[1]);
	return (0);
}
