/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:49:30 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/11 11:01:21 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie a;
    Zombie *b = NULL;
    Zombie c;
    Zombie *d = NULL;

    a.randomChump("Oceane");
    c.randomChump("Test");
    b = b->newZombie("Lea");
    d = d->newZombie("Emilie");
    b->announce();
    d->announce();
    b->destructor();
    d->destructor();
}
