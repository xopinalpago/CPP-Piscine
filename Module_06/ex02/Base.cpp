/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:07:39 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/08 15:35:47 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base(void)
{
	return ;
}

Base::~Base(void)
{
	return ;
}

Base *Base::generate(void)
{
    std::srand(static_cast<unsigned int>(std::time(0)));
    int rand = (std::rand() % 3) + 1;
	if (rand == 1)
	{
		std::cout << "A created" << std::endl;
		return (new A());
	}
	else if (rand == 2)
	{
		std::cout << "B created" << std::endl;
		return (new B());
	}
	else if (rand == 3)
	{
		std::cout << "C created" << std::endl;
		return (new C());
	}
	return (NULL);
}

void Base::identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Class A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Class B" << std::endl;
    else
        std::cout << "Class C" << std::endl;
}

void Base::identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "Class A" << std::endl;
    }
    catch (std::exception &bc)
    {}
    try
    {
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "Class B" << std::endl;
    }
    catch (std::exception &bc)
    {}
    try
    {
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "Class C" << std::endl;
    }
    catch (std::exception &bc)
    {}
}
