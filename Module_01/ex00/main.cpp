/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:18:12 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/04 10:57:55 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
    Zombie *zombie;

    zombie = newZombie("Rems");
    zombie->announce();
    randomChump("Gaga");
    delete zombie;
}
