/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:18:07 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/10 16:22:23 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include <algorithm>
#include <iterator>

template <typename T>
int easyfind(T const numbers, int to_find)
{
    typename T::const_iterator res;
    res = std::find(numbers.begin(), numbers.end(), to_find);
    if (res != numbers.end())
        return (std::distance(numbers.begin(), res));
    else
        throw (std::out_of_range("Element not found in container."));
}

#endif