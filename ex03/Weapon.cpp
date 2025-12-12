/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 15:22:47 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/12 14:39:55 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	Weapon::setType(std::string name)
{
	this->_type = name;
}
Weapon::Weapon(std::string str)
{
	_type = str;
}
std::string Weapon::getType(void)
{
	return (_type);
}
