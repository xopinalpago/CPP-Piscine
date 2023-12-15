/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:39:09 by rmeriau           #+#    #+#             */
/*   Updated: 2023/11/29 15:28:57 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl Harl;
	
	std::cout << "[ DEBUG ]" << std::endl;
	Harl.complain("DEBUG");
	std::cout << std::endl;
	std::cout << "[ INFO ]" << std::endl;
	Harl.complain("INFO");
	std::cout << std::endl;
	std::cout << "[ WARNING ]" << std::endl;
	Harl.complain("WARNING");
	std::cout << std::endl;
	std::cout << "[ ERROR ]" << std::endl;
	Harl.complain("ERROR");
	Harl.complain("DFSDF");
	return (0);
}