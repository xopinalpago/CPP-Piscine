/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:54:26 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/14 11:06:14 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::string redCode = "\033[0;31m";
	std::string resetCode = "\033[0m";
	std::cout << redCode << "-------ANIMAL-------" << resetCode << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
	std::cout << std::endl;
	std::cout << redCode << "-------WRONG ANIMAL-------" << resetCode << std::endl;
	const WrongAnimal* meta2 = new WrongAnimal();
	const Animal* j2 = new Dog();
	const WrongAnimal* i2 = new WrongCat();
	std::cout << j2->getType() << " " << std::endl;
	std::cout << i2->getType() << " " << std::endl;
	i2->makeSound();
	j2->makeSound();
	meta2->makeSound();
	delete meta2;
	delete j2;
	delete i2;
	
	return (0);
}
