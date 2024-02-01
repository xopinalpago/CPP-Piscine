/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:13:08 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/30 15:25:38 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	BitcoinExchange be;
	
	if (argc > 2)
		return (std::cout << "Wrong number of arguments." << std::endl, 1);
	else if (argc == 1)
		return (std::cout << "Error: could not open file." << std::endl, 1);
	std::string file = argv[1];
	if (be.read_data() == 0)
		return (1);
	if (be.read_file(file) == 0)
		return (1);
	return (0);
}