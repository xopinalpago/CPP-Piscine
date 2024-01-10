/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:19:25 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/10 11:13:51 by rmeriau          ###   ########.fr       */
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

template < typename T>
void iter(T *tab, size_t len, void (*ptr_f)(T& elem))
{
    for (size_t i = 0; i < len; i++)
    {
        ptr_f(tab[i]);
    }
}

#endif