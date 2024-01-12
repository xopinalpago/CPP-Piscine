/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:19:25 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/12 12:24:13 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <iostream>

template < typename T>
void ft_test(T elem)
{
    std::cout << elem << std::endl;
}

template<class T>
void    iter(T *tab, int len, void(*f)(T const &elem))
{
    for(int i = 0; i < len; i++)
    {
        T &elem = tab[i];
        f(elem);
    }
}

#endif