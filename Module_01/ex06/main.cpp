/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:39:09 by rmeriau           #+#    #+#             */
/*   Updated: 2023/11/29 11:32:41 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;

    if (argc > 2 || argc <= 1)
    {
        std::cout << "Wrong number of arguments." << std::endl;
        return (1);
    }
    if (argv[1])
	{
        harl.complain(argv[1]);
	}
	return (0);
}