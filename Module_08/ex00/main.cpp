/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:01:57 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/11 14:52:13 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <deque>

int main()
{
	std::string cyanCode = "\033[1;36m";
	std::string resetCode = "\033[0m";
	int res = 0;

    std::cout << cyanCode << "Test container list" << resetCode << std::endl;
    std::list<int> lis;
    lis.push_back(11);
    lis.push_back(22);
    lis.push_back(33);
    lis.push_back(44); 
    lis.push_back(55);
	lis.push_back(33); 
	try
	{
    	res = easyfind(lis, 33);
		std::cout << "Element found at index " << res << "." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
    	res = easyfind(lis, 10);
		std::cout << "Element found at index " << res << "." <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    std::cout << cyanCode << "Test container vector" << resetCode << std::endl;
    std::vector<int> vec;
    vec.push_back(11);
    vec.push_back(22);
    vec.push_back(33);
    vec.push_back(44); 
    vec.push_back(55);
	try
	{
    	res = easyfind(vec, 55);
		std::cout << "Element found at index " << res << "." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
    	res = easyfind(vec, 111);
		std::cout << "Element found at index " << res << "." <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    std::cout << cyanCode << "Test container deque" << resetCode << std::endl;
    std::deque<int> deq;
    deq.push_front(11);
    deq.push_front(22);
    deq.push_front(33);
    deq.push_front(44); 
    deq.push_front(55);
	try
	{
    	res = easyfind(deq, 44);
		std::cout << "Element found at index " << res << "." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
    	res = easyfind(deq, 23);
		std::cout << "Element found at index " << res << "." <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    return 0;
}