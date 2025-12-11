/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 17:41:13 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/11 18:20:40 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
        return (1);
    for (int i = 1; i < ac; i++)
    {
        if (!av[i] || av[i][0] == '\0')
            return (1);
    }
    std::string old_file = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string line;
    
    std::ifstream file(av[1]);
    if (!file)
        return (1);
    std::string new_file = old_file + ".replace";
    std::ofstream copy(new_file.c_str());
    while (std::getline(line, s1))
    {
        
    }
    file.close();
}
