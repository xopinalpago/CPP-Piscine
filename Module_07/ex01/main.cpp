/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:01:57 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/12 12:24:59 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	std::string cyanCode = "\033[1;36m";
	std::string resetCode = "\033[0m";

    size_t size = 3;
    
    std::cout << cyanCode << "Int Test" << resetCode << std::endl;
    int tab[3] = {10, 20, 30};
    iter(tab, size, ft_test);
    std::cout << std::endl;

    std::cout << cyanCode << "Float Test" << resetCode << std::endl;
    float tabf[3] = {1.0, 2.0, 3.0};
    iter(tabf, size, ft_test);
    std::cout << std::endl;
    
    std::cout << cyanCode << "String Test" << resetCode << std::endl;
    std::string tabs[3] = {"Coucou", "Ca", "Va?"};
    iter(tabs, size, ft_test);
}
