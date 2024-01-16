/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:01:27 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/11 17:42:38 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	public:
		class TooManyNumbers : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class NotEnoughNumbers : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		Span(void);
		Span(unsigned int N);
		Span(Span const & span);
		Span &operator=(Span const & span);
		~Span(void);
		void 	addNumber(int nb);
		void 	addNumber(std::vector<int> to_add);
		int 	longestSpan(void);
		int 	shortestSpan(void);
	private:
		unsigned int 		_N;
		std::vector<int> 	_data;
};
