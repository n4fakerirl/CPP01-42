/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 17:08:53 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/12 14:39:27 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_B->getType() << std::endl;
}

HumanB::HumanB(std::string str) : _name(str)
{
}
void HumanB::setWeapon(Weapon &w)
{
    _B = &w;
}
