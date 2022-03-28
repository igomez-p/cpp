/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-p <igomez-p@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 09:26:10 by igomez-p          #+#    #+#             */
/*   Updated: 2022/03/28 14:58:59 by igomez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include <iostream>
#include <string>
#include <iomanip>
#include "contact.hpp"

#define ADD     "ADD"
#define EXIT    "EXIT"
#define SEARCH  "SEARCH"

class PhoneBook {
    
private:
    int num;
    std::string command;
    Contact contacts[8];

public:
    PhoneBook();
    ~PhoneBook();
    bool read_command();
    void add_contact(int index, Contact pers);
    void search_contact(int index);
    bool print_contacts();
    int getNextIndex();
    void setNum(int num);
    int getNum();
};

#endif