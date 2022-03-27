/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-p <igomez-p@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 09:26:10 by igomez-p          #+#    #+#             */
/*   Updated: 2022/03/27 11:29:44 by igomez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "contact.hpp"

#define ADD     "ADD"
#define EXIT    "EXIT"
#define SEARCH  "SEARCH"

class PhoneBook {
    
private:
    std::string command;
    Contact contacts[8];

public:
    PhoneBook();
    ~PhoneBook();
    int read_command();
    //void add_contact(std::string name1, std::string name2, std::string nick, std::string phone, std::string secret);
    void add_contact(int index, Contact pers);
    void search_contact(int index);
    void print_contacts();
    int getNextIndex();
};