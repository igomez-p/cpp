/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-p <igomez-p@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 09:26:06 by igomez-p          #+#    #+#             */
/*   Updated: 2022/03/27 10:08:56 by igomez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "agenda.hpp"

PPhoneBook();
~PhoneBook();
void read_command(std::string cmd);
//void add_contact(std::string name1, std::string name2, std::string nick, std::string phone, std::string secret);
void add_contact(int index, Contact pers);
void search_contact(int index);
void exit();
void print_contact(int index);