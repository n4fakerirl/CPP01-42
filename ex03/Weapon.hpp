/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 15:21:19 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/12 14:39:43 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon
{
    private:
    std::string _type;

    public:
    std::string getType(void);
    Weapon(std::string str);
    void setType(std::string name);
};
