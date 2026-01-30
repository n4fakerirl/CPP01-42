/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 13:12:34 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/30 10:15:41 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl karen;

    karen.complain("DEBUG");
    std::cout << "\n";
    karen.complain("INFO");
    std::cout << "\n";
    karen.complain("WARNING");
    std::cout << "\n";
    karen.complain("ERROR");
    std::cout << "\n";
    karen.complain("test");
    std::cout << "\n";
}
