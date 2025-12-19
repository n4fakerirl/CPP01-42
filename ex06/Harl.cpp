/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 11:24:51 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/19 11:45:06 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}
void Harl::info(void)
{
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}
void Harl::warning(void)
{
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month.\n";
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
    int i = 0;
    std::string names[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    while (i < 4 && names[i] != level)
        i++;
    switch (i)
    {
        case 0:
            this->debug();
            std::cout << "\n";
        case 1:
            this->info();
            std::cout << "\n";
        case 2:
            this->warning();
            std::cout << "\n";
        case 3:
            this->error();
            std::cout << "\n";
            break ;
        default:
            print("[ Probably complaining about insignificant problems ]");
    }
}
