/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:18:12 by rmeriau           #+#    #+#             */
/*   Updated: 2023/11/27 17:44:39 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
    Zombie *zombies;
    int n = 10;

    zombies = zombieHorde(n, "Rems");
    for (int i = 0; i < n; i++)    
        zombies[i].announce();
    delete [] zombies;
}
