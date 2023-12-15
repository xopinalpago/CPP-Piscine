/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:12:24 by rmeriau           #+#    #+#             */
/*   Updated: 2023/11/27 11:23:23 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	PhoneBook	phonebook;
	std::string	user_input;
	
	while (1)
	{
		std::cout << "Enter a command: ";
		if (!std::getline(std::cin, user_input))
			break ;
		else if (user_input == "ADD")
			phonebook.add_contact();
		else if (user_input == "SEARCH")
			phonebook.search_contact();
		else if (user_input == "EXIT")
			break ;
		else
			std::cout << "Invalid command. Please insert a valid command.\nADD, SEARCH or EXIT" << std::endl;
	}
	return (0);
}
