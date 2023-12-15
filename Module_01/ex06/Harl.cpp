/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:18:36 by rmeriau           #+#    #+#             */
/*   Updated: 2023/11/29 11:25:49 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	ptr_fct[0] = &Harl::debug;
	ptr_fct[1] = &Harl::info;
	ptr_fct[2] = &Harl::warning;
	ptr_fct[3] = &Harl::error;
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void Harl::complain(std::string level)
{
    std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int pos = -1;

    if (!level.empty())
    {
        for (int i = 0 ; i < 4 ; i++)
        {
            if (lvl[i] == level)
                pos = i;
        }
    }
	for (int i = pos ; i < 4 ; i++)
    {
		switch(i)
		{
			case 0:
				this->debug();
				break ;
			case 1:
				this->info();
				break ;
			case 2:
				this->warning();
				break ;
			case 3:
				this->error();
				break ;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				return ;
		}
	}
}

void Harl::debug(void) const
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do !" << std::endl;
	std::cout << std::endl;
	return ;
}

void Harl::info(void) const
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	std::cout << std::endl;
	return ;
}

void Harl::warning(void) const
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
	return ;
}

void Harl::error(void) const
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
	return ;
}
