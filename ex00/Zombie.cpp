/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 11:03:19 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/11 11:06:41 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string get_name(void)
{
        return (_name);
}

void set_name(std::string name)
{
     _name = name; 
}

void announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

void destructor()
{
    std::cout << this->_name << ": Zombie destroyed.\n";
    delete this;
}
