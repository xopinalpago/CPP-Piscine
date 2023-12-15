/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:18:36 by rmeriau           #+#    #+#             */
/*   Updated: 2023/11/29 15:26:59 by rmeriau          ###   ########.fr       */
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

void Harl::complain(std::string level) const
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
	{
        if (levels[i] == level)
            (this->*ptr_fct[i])();
	}
}

void Harl::debug(void) const
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
	return ;
}

void Harl::info(void) const
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	return ;
}

void Harl::warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void Harl::error(void) const
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	return ;
}
