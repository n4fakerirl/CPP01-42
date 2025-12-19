/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 11:24:59 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/19 11:35:13 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void print(std::string message)
{
    std::cout << message << "\n";
}

int main(int ac, char **av)
{
    if (ac != 2)
        return (print("error: usage: ./harlFilter 'message'"), 1);
    Harl harl;
    harl.complain(av[1]);
    return (0);
}