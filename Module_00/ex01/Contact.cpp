/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:59:11 by rmeriau           #+#    #+#             */
/*   Updated: 2023/11/24 14:58:21 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

Contact::Contact(std::string _first_name, std::string _last_name, \
		std::string _nickname, std::string _phone_number, std::string _darkest_secret)
{
	this->_first_name = _first_name;
	this->_last_name = _last_name;
	this->_nickname = _nickname;
	this->_phone_number = _phone_number;
	this->_darkest_secret = _darkest_secret;
}

std::string Contact::Get_first_name(void) const
{
	return (this->_first_name);
}

std::string Contact::Get_last_name(void) const
{
	return (this->_last_name);
}

std::string Contact::Get_nickname(void) const
{
	return (this->_nickname);
}

std::string Contact::Get_phone_number(void) const
{
	return (this->_phone_number);
}

std::string Contact::Get_darkest_secret(void) const
{
	return (this->_darkest_secret);
}

void Contact::Set_first_name(std::string str)
{
    if (str.length() > 0)
    	this->_first_name = str;
    return ;
}

void Contact::Set_last_name(std::string str)
{
    if (str.length() > 0)
    	this->_last_name = str;
    return ;
}

void Contact::Set_nickname(std::string str)
{
    if (str.length() > 0)
    	this->_nickname = str;
    return ;
}

void Contact::Set_darkest_secret(std::string str)
{
    if (str.length() > 0)
    	this->_phone_number = str;
    return ;
}

void Contact::Set_phone_number(std::string str)
{
    if (str.length() > 0)
    	this->_darkest_secret = str;
    return ;
}