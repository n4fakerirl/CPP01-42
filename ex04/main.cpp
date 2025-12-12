/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 17:41:13 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/12 14:37:25 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void search(std::ifstream &file, std::ofstream &copy, std::string s1, std::string s2)
{
    std::string line;

    while (std::getline(file, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s1.length();
        }
        copy << line << "\n";
    }
}

int main(int ac, char **av)
{
    if (ac != 4)
        return (std::cout << "error: usage: ./sed [file] [s1 : string to search] [s2 : string to replace s1]\n", 1);
    for (int i = 1; i < ac; i++)
    {
        if (!av[i] || av[i][0] == '\0')
            return (std::cout << "error: arguments can't be blank\n", 1);
    }
    std::string old_file = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    
    std::ifstream file(av[1]);
    if (!file.is_open())
        return (std::cout << "error: can't open file\n", 1);
    file.seekg(0, std::ios::end);
    if (file.tellg() == 0)
        return (std::cout << "error: file is empty or the argument is a directory\n", 1);
    file.seekg(0);
    std::string new_file = old_file + ".replace";
    std::ofstream copy(new_file.c_str());
    if (!copy.is_open())
        return (std::cout << "error: file is empty or the argument is a directory\n", 1);
    search(file, copy, s1, s2);
    file.close();
    copy.close();
}
