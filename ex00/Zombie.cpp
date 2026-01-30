/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 11:03:19 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/30 10:19:56 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string Zombie::get_name(void)
{
    return (_name);
}

void Zombie::set_name(std::string name)
{
    _name = name; 
}

void Zombie::announce(void)
{
    std::cout << this->get_name() << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{
    std::cout << this->get_name() << " destroyed" << std::endl;
}
