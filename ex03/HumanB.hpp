/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 17:07:37 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/12 14:39:15 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanB
{
    private:
    Weapon *_B;
    std::string _name;

    public:
    void attack(void);
    HumanB(std::string str);
    void setWeapon(Weapon &w);
};