/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-p <igomez-p@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 12:04:47 by igomez-p          #+#    #+#             */
/*   Updated: 2022/03/27 17:15:45 by igomez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
    PhoneBook phonebook = PhoneBook();

    while (!phonebook.read_command()) {}
    return (0);
}