/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:48:44 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/15 10:53:51 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) {return ;}
		MutantStack(MutantStack const &copy) {*this = copy;}
		MutantStack &operator=(MutantStack const &copy)
		{
			if (this == &copy)
				return (*this);
			return (*this);
		}
		~MutantStack(void) {return ;}
	    typedef typename MutantStack<T>::stack::container_type::iterator iterator;
        iterator begin() {return this->c.begin();}
        iterator end() {return this->c.end();}

		typedef typename MutantStack<T>::stack::container_type::reverse_iterator reverse_iterator;
        reverse_iterator rbegin() {return this->c.rbegin();}
        reverse_iterator rend() {return this->c.rend();}
};

#endif
