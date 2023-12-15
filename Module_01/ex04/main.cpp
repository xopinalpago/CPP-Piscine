/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:31:53 by rmeriau           #+#    #+#             */
/*   Updated: 2023/11/28 16:19:46 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void ft_replace(std::string s1, std::string s2, std::ifstream &ifs, std::ofstream &ofs)
{
	std::string line;
	size_t pos;
	size_t i;
	
	while (std::getline(ifs, line))
	{
		i = 0;
		while (i < line.size())
		{
			pos = line.find(s1.c_str(), i);
			if (pos != std::string::npos && s1.size() != 0)
			{
				ofs << line.substr(i, pos - i) << s2;
				i = pos + s1.size();
			}
			else
			{
				ofs << line.substr(i, line.size() - i);
				break ;
			}
		}
		ofs << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
        return (1);
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream ifs(filename.c_str());
	if (!ifs.is_open())
	{
		std::cout << "Error opening infile." << std::endl;
		return (1);
	}
	std::ofstream ofs(filename.append(".replace").c_str());
	if (!ofs.is_open())
	{
		std::cout << "Error opening outfile." << std::endl;
		return (1);
	}
	ft_replace(s1, s2, ifs, ofs);
	ifs.close();
	ofs.close();
	return (0);
}
