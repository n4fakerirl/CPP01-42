/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 15:57:39 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/12 14:38:37 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanA
{
    private:
    std::string _name;
    Weapon &_A;
    
    public:
    HumanA(std::string str, Weapon &n);
    void attack(void);
};