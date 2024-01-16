/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:16:10 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/15 10:40:33 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	std::string cyanCode = "\033[1;36m";
	std::string resetCode = "\033[0m";

	MutantStack<int> st;
	st.push(3);
	st.push(1);
	st.push(2);
	st.push(4);
	st.push(100);

	std::cout << cyanCode << "Iterator test" << resetCode << std::endl;
	MutantStack<int>::iterator it = st.begin();
    MutantStack<int>::iterator ite = st.end();
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
	
	std::cout << cyanCode << "Reverse Iterator test" << resetCode << std::endl;
	MutantStack<int>::reverse_iterator rit = st.rbegin();
    MutantStack<int>::reverse_iterator rite = st.rend();
    while (rit != rite)
    {
        std::cout << *rit << std::endl;
        ++rit;
    }
	return (0);
}

// int main()
// {
// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	mstack.push(0);
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::stack<int> s(mstack);


// 	std::cout << std::endl;
// 	std::list<int> lstack;
// 	lstack.push_back(5);
// 	lstack.push_back(17);
// 	std::cout << lstack.back() << std::endl;
// 	lstack.pop_back();
// 	std::cout << lstack.size() << std::endl;
// 	lstack.push_back(3);
// 	lstack.push_back(5);
// 	lstack.push_back(737);
// 	lstack.push_back(0);
// 	std::list<int>::iterator lit = lstack.begin();
// 	std::list<int>::iterator lite = lstack.end();
// 	++lit;
// 	--lit;
// 	while (lit != lite)
// 	{
// 		std::cout << *lit << std::endl;
// 		++lit;
// 	}
// 	std::list<int> l(lstack);
// 	return 0;
// }