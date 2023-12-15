/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:38:33 by rmeriau           #+#    #+#             */
/*   Updated: 2023/11/27 15:51:02 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class Contact {
	public:
		Contact();
		~Contact();
		Contact(std::string _first_name, std::string _last_name, \
			std::string _nickname, std::string _phone_number, std::string _darkest_secret);
		std::string Get_first_name(void) const;
		std::string Get_last_name(void) const;
		std::string Get_nickname(void) const;
		std::string Get_phone_number(void) const;
		std::string Get_darkest_secret(void) const;
		void Set_first_name(std::string);
		void Set_last_name(std::string);
		void Set_nickname(std::string);
		void Set_darkest_secret(std::string);
		void Set_phone_number(std::string);
		
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
};

#endif