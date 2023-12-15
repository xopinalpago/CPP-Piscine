/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:12:34 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/14 11:56:28 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	std::string cyanCode = "\033[1;36m";
	std::string redCode = "\033[0;31m";
	std::string resetCode = "\033[0m";
	std::cout << redCode << "-------MATERIA TEST-------" << resetCode << std::endl;
	IMateriaSource* src = new MateriaSource();
	//Learn Materia
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	//Full Repertory
	std::cout << cyanCode << "       Check Full Repertory" << resetCode << std::endl;
	src->learnMateria(new Ice());
	
	std::cout << std::endl;
	std::cout << redCode << "-------CHARACTER TEST-------" << resetCode << std::endl;
	Character* Rems = new Character("Rems");
	AMateria* tmp;
	//Equip
	tmp = src->createMateria("ice");
	Rems->equip(tmp);
	tmp = src->createMateria("cure");
	Rems->equip(tmp);
	tmp = src->createMateria("ice");
	Rems->equip(tmp);
	tmp = src->createMateria("cure");
	Rems->equip(tmp);
		
	//Full Inventory
	std::cout << cyanCode << "       Check Full Inventory" << resetCode << std::endl;
	tmp = src->createMateria("ice");
	Rems->equip(tmp);
	delete tmp;
	
	//Wrong Materia
	std::cout << cyanCode << "       Check Wrong Materia 'fire'" << resetCode << std::endl;
	tmp = src->createMateria("fire");
	Rems->equip(tmp);
	delete tmp;
	
	//Unequip
	Rems->unequip(5);
	tmp = Rems->leaveMateria(0); //no leaks
	Character* Gaga = new Character("Gaga");
	//Use before unequip
	std::cout << cyanCode << "       Check Use Before Unequip" << resetCode << std::endl;
	Rems->use(0, *Gaga);
	Rems->unequip(0);
	//Use after unequip
	std::cout << cyanCode << "       Check Use After Unequip" << resetCode << std::endl;
	Rems->use(0, *Gaga);
	delete tmp;

	//Equip again
	std::cout << cyanCode << "       Check Equip Again" << resetCode << std::endl;
	tmp = src->createMateria("cure");
	Rems->equip(tmp);
	Rems->use(0, *Gaga);

	//Use
	std::cout << cyanCode << "       Check Use Wrong Index" << resetCode << std::endl;
	Rems->use(1, *Gaga);
	Rems->use(2, *Gaga);
	Rems->use(3, *Gaga);
	Rems->use(4, *Gaga);
	
	std::cout << std::endl;
	std::cout << redCode << "-------COPY TEST-------" << resetCode << std::endl;
	//Copy
	std::cout << cyanCode << "       Check Copy" << resetCode << std::endl;
	Character *copy = new Character(*Rems);
	std::cout << "Copy Name : " << copy->getName() << std::endl;
	copy->use(0, *Gaga);
	copy->use(1, *Gaga);
	copy->use(2, *Gaga);
	copy->use(3, *Gaga);
	
	//Copy Assignment
	std::cout << cyanCode << "       Check Copy Assignment" << resetCode << std::endl;
	Character *assignment = new Character();
	*assignment = *Rems;
	std::cout << "Assignment Name : " << assignment->getName() << std::endl;
	assignment->use(0, *Gaga);
	assignment->use(1, *Gaga);
	assignment->use(2, *Gaga);
	assignment->use(3, *Gaga);
	
	delete Rems;
	delete Gaga;
	delete copy;
	delete assignment;
	delete src;
	return (0);
}

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return (0);
// }