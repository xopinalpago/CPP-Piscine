/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:30:15 by rmeriau           #+#    #+#             */
/*   Updated: 2023/11/27 12:15:19 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		void 	add_contact(void);
		void 	search_contact(void);
		Contact Get_contact(int i) const;

	private:
		int		_id;
		Contact	_contacts[8];
		void 	_printstr(std::string);
		void	_printTable(void);
		void	_printContact(Contact);
		int 	_containsOnlyDigits(std::string);
};

#endif