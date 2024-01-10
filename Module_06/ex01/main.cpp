/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:44:29 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/08 14:46:30 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data	*p1;
    Data	*p2;
    uintptr_t   raw;

    p1 = new Data;
    p1->nb = 10;
	std::cout << "p1 = " << p1 << std::endl;
	std::cout << "p1->nb = " << p1->nb << std::endl;
    raw = Serializer::serialize(p1);
    std::cout << "raw: " << raw << std::endl;
    p2 = Serializer::deserialize(raw);
	std::cout << "p2 = " << p2 << std::endl;
    std::cout << "p2->nb = " << p2->nb << std::endl;
    delete p1;
    return (0);
}