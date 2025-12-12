/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 13:12:27 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/12 13:26:09 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Harl
{
    private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

    public:
    void complain(std::string level);
};