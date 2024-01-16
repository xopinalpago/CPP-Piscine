/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:13:08 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/16 17:48:31 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	RPN rpn;
	
	if (argc != 2)
		return (std::cout << "Error: Wrong Number of arguments" << std::endl, 1);
	rpn.do_operation(argv[1]);
	return (0);
}
