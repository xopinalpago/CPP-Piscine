/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:14:49 by rmeriau           #+#    #+#             */
/*   Updated: 2023/11/27 14:03:11 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook(void)
{
	this->_id= 0;
	return ;
}

PhoneBook::~PhoneBook(void) 
{
	return ;
}

int PhoneBook::_containsOnlyDigits(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
	{
        if (!isdigit(str[i]))
		{
            return (0);
        }
    }
    return (1);
}

void	PhoneBook::add_contact(void)
{
	Contact contact;
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;

	while (1)
	{
		std::cout << "Enter First Name" << std::endl;
        if (!std::getline(std::cin, _first_name))
			exit(0);
		if (_first_name.length() == 0)
			std::cout << "A contact can't have any empty field." << std::endl;
		else
			break ;
	}
	while (1)
	{
		std::cout << "Enter Last Name" << std::endl;
        if (!std::getline(std::cin, _last_name))
            exit(0);
		if (_last_name.length() == 0)
			std::cout << "A contact can't have any empty field." << std::endl;
		else
			break ;
	}
	while (1)
	{
		std::cout << "Enter Nickname" << std::endl;
        if (!std::getline(std::cin, _nickname))
            exit(0);
		if (_nickname.length() == 0)
			std::cout << "A contact can't have any empty field." << std::endl;
		else
			break ;
	}
	while (1)
	{
		std::cout << "Enter Phone Number" << std::endl;
        if (!std::getline(std::cin, _phone_number))
            exit(0);
		if (_phone_number.length() == 10 && _containsOnlyDigits(_phone_number))
			break ;
		else
			std::cout << "Only 10 digits are allowed. Please enter again." << std::endl;
	}
	while (1)
	{
		std::cout << "Enter Darkest Secret" << std::endl;
        if (!std::getline(std::cin, _darkest_secret))
            exit(0);
		if (_darkest_secret.length() == 0)
			std::cout << "A contact can't have any empty field." << std::endl;
		else
			break ;
	}
	this->_contacts[this->_id % 8] = Contact(_first_name, _last_name, _nickname, _phone_number, _darkest_secret);
	this->_id++;
	std::cout << "Contact added!!"<< std::endl;
}

void PhoneBook::_printstr(std::string texte)
{
    const int largeurColonne = 10;

    if (texte.length() > largeurColonne) {
        texte = texte.substr(0, largeurColonne - 1) + ".";
    }
    std::cout << std::setw(largeurColonne) << std::right << texte;
}

void	PhoneBook::_printTable(void)
{
	for (int i = 0; i < 8; i++)
	{
		if (this->_contacts[i].Get_first_name().length() > 0)
		{
			std::cout << "|";
			std::cout << std::setw(10) << i + 1 << "|";
			_printstr(this->_contacts[i].Get_first_name());
			std::cout << "|";
			_printstr(this->_contacts[i].Get_last_name());
			std::cout << "|";
			_printstr(this->_contacts[i].Get_nickname());
			std::cout << "|" << std::endl;
		}
	}
}

void	PhoneBook::_printContact(Contact contact)
{
    std::cout << "First name : " << contact.Get_first_name() << std::endl;
	std::cout << "Last name : " << contact.Get_last_name() << std::endl;
    std::cout << "Nickname : " << contact.Get_nickname() << std::endl;
    std::cout << "Phone number : " << contact.Get_phone_number() << std::endl;
    std::cout << "Darkest secret : " << contact.Get_darkest_secret() << std::endl;
}

Contact PhoneBook::Get_contact(int i) const
{
    return (this->_contacts[i]);
}

void	PhoneBook::search_contact(void)
{
    std::string index;
	int 		nb_contact;
	int 		i = 0;

	if (this->_id == 0)
	{
		std::cout << "No contact in Phonebook." << std::endl;
		return ;	
	}
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	this->_printTable();
	if (this->_id > 8)
		nb_contact = 8;
	else
		nb_contact = this->_id;
	while (1)
	{
		std::cout << "Enter the index of the contact whose information you want." << std::endl;
		if (!std::getline(std::cin, index))
            exit(0);
		if (index.length() != 1) 
		{
			std::cout << "Enter a number between 1 and " << nb_contact << "." << std::endl;
			continue ;
		}
        i = index[0] - 48;
        if (i > 0 && i <= nb_contact)
        {
            _printContact(this->Get_contact(i - 1));
            break ;
        }
        else
		{
			std::cout << "Enter a number between 1 and " << nb_contact << "." << std::endl;
			continue ;
		}
	}
}
