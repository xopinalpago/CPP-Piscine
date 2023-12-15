/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:54:26 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/14 11:29:56 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::string cyanCode = "\033[1;36m";
	std::string redCode = "\033[0;31m";
	std::string resetCode = "\033[0m";
	std::cout << redCode << "-------CAT TEST-------" << resetCode << std::endl;
	// Initialisation
	Cat *cat = new Cat();
	std::cout << std::endl;
	std::cout << cyanCode << "       Cat Init Ideas" << resetCode << std::endl;
	std::cout << cat->getBrain()->getIdeas(10) << std::endl;
	cat->getBrain()->setIdeas(10, "coucou");
	//Copies
	std::cout << std::endl;
	Cat *catAssignment = new Cat();
	*catAssignment = *cat;
	Cat *catCopy = new Cat(*cat);
	std::cout << std::endl;
	std::cout << cyanCode << "       Cats Copies Ideas" << resetCode << std::endl;
	std::cout << cat->getBrain()->getIdeas(10) << std::endl;
	std::cout << catAssignment->getBrain()->getIdeas(10) << std::endl;
	std::cout << catCopy->getBrain()->getIdeas(10) << std::endl;
	catAssignment->getBrain()->setIdeas(10, "salut");
	catCopy->getBrain()->setIdeas(10, "hello");
	std::cout << std::endl;
	std::cout << cyanCode << "       Replace Cats Copies Ideas" << resetCode << std::endl;
	std::cout << cat->getBrain()->getIdeas(10) << std::endl;
	std::cout << catAssignment->getBrain()->getIdeas(10) << std::endl;
	std::cout << catCopy->getBrain()->getIdeas(10) << std::endl;
	std::cout << std::endl;
	delete cat;
	delete catAssignment;
	delete catCopy;

	std::cout << std::endl;
	std::cout << redCode << "-------ARRAY TEST-------" << resetCode << std::endl;
	int len = 10;
	AAnimal *animals[len];
	for (int i = 0; i < len / 2; i++)
	{
		animals[i] = new Dog();
	}
	for (int i = len / 2; i < len; i++)
	{
		animals[i] = new Cat();
	}
	for (int i = 0; i < len; i++)
	{
		animals[i]->makeSound();
	}
	for (int i = 0; i < len; i++)
	{
		delete animals[i];
	}	
	
	// const AAnimal* meta = new AAnimal();
	// AAnimal test;
	return (0);
}
