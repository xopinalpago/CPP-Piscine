/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:13:08 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/16 14:24:34 by rmeriau          ###   ########.fr       */
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
	be.read_data();
	be.read_file(file);
	return (0);
}