/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:01:57 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/10 11:26:34 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	std::string cyanCode = "\033[1;36m";
	std::string resetCode = "\033[0m";

    std::cout << cyanCode << "Init Array" << resetCode << std::endl;
    int len = 10;
    Array<int> tab1;
    Array<int> tab2(len);
    for (int i = 0; i < len; i++)
        tab2[i] = i;
    for (int i = 0; i < len; i++)
        std::cout << tab2[i] << " ";
    std::cout << std::endl;
    
    std::cout << cyanCode << "Copy using copy constructor" << resetCode << std::endl;
    Array<int> copy1(tab2);
    for (int i = 0; i < len; i++)
        std::cout << copy1[i] << " ";
    std::cout << std::endl;
    
    std::cout << cyanCode << "Copy using assignment operator" << resetCode << std::endl;
    Array<int> copy2;
    copy2 = tab2;
    for (int i = 0; i < len; i++)
        std::cout << copy2[i] << " ";
    std::cout << std::endl;

    std::cout << cyanCode << "Changing value" << resetCode << std::endl;
    copy1[5] = 123456789;
    copy2[9] = 11111;
    for (int i = 0; i < len; i++)
        std::cout << tab2[i] << " ";
    std::cout << std::endl;
    for (int i = 0; i < len; i++)
        std::cout << copy1[i] << " ";
    std::cout << std::endl;
    for (int i = 0; i < len; i++)
        std::cout << copy2[i] << " ";
    std::cout << std::endl;

    std::cout << cyanCode << "Error index" << resetCode << std::endl;
    try
    {
        std::cout << tab2[15] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << cyanCode << "Size test" << resetCode << std::endl;
    std::cout << tab2.size() << std::endl;
       
    return (0);
}
