/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-p <igomez-p@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 07:51:28 by igomez-p          #+#    #+#             */
/*   Updated: 2022/03/27 08:47:51 by igomez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    if (argc != 1)
    {
        for (int i = 1; i < argc; i++)
        {
            std::string line(argv[i]);
            for (char c : line)
                std::cout << (char)std::toupper(c);
            std::cout << ' ';
        }
    } else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (0);
}