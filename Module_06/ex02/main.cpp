/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:44:29 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/08 15:36:27 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
    Base base;
    Base *guess;
    guess = base.generate();
    base.identify(guess);
    base.identify(*guess);
    delete guess;
    return (0);
}