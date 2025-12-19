/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 16:35:09 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/19 14:14:28 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " << _A.getType() << std::endl;
}

HumanA::HumanA(std::string str, Weapon &n) : _name(str), _A(n)
{
}
