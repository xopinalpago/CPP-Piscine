/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:17:16 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/08 14:42:42 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{
	return ;
}

Serializer::Serializer(Serializer const & serializer)
{
	*this = serializer;
	return ;
}

Serializer &Serializer::operator=(Serializer const & serializer)
{
	if (this == &serializer)
		return (*this);
	return (*this);
}

Serializer::~Serializer(void)
{
	return ;
}

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t raw;
	raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data *ptr;
	ptr = reinterpret_cast<Data*>(raw);
	return (ptr);	
}
