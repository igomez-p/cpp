/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-p <igomez-p@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 09:26:06 by igomez-p          #+#    #+#             */
/*   Updated: 2022/03/27 16:30:50 by igomez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    this->command = "";
    for (int i = 0; i < 8; i++)
        this->contacts[i].setIndex(-1);
}

PhoneBook::~PhoneBook()
{
    this->command = "";
    for (int i = 0; i < 8; i++)
        this->contacts[i].setIndex(-1);
}

bool PhoneBook::read_command()
{
    std::string index;
//    int index;
    Contact pers;
    bool exit = false;

    this->command.clear();
    std::cout << "Insert command: ";
    std::cin >> this->command;

    if (this->command.compare(ADD) == 0)
        this->add_contact(this->getNextIndex(), pers);
    else if (this->command.compare(SEARCH) == 0)
    {
        if (!this->print_contacts())
        {
            std::cout << "Insert index: ";
            getline(std::cin, index);
            if (index.length() == 1 && std::isdigit(index[0]))
               this->search_contact(index[0] - '0');
        }
    }
    else if (this->command.compare(EXIT) == 0)
        exit = true;
    return (exit);
}

void PhoneBook::add_contact(int index, Contact pers)
{
    std::string name1, name2, nick, phone, secret;

    std::cout << "Insert first name: ";
    getline(std::cin, name1); // TODO: Lee nombre y apellido seguidos, se salta este getline
    std::cout << "Insert last name: ";
    getline(std::cin, name2);
    std::cout << "Insert nickname: ";
    getline(std::cin, nick);
    std::cout << "Insert phone: ";
    getline(std::cin, phone);
    std::cout << "Insert darkest secret: ";
    getline(std::cin, secret);

    pers = Contact(this->getNextIndex(), name1, name2, nick, phone, secret);
    this->contacts[this->getNextIndex()] = pers;
}

void PhoneBook::search_contact(int index)
{
    for (Contact c : this->contacts)
        if (c.getIndex() == index) c.getContact(index);
}

bool PhoneBook::print_contacts()
{
    bool empty = true;

    for (Contact c : this->contacts)
    {
        if (c.getIndex() != -1)
        {
            std::cout << "|" << std::setw(10) << c.getIndex() << "|";
            if (c.getFirstName().length() >= 10)
                std::cout << c.getFirstName().substr(0, 9) << ".|";
            else
                std::cout << std::setw(10) << c.getFirstName() << "|";
            if (c.getLastName().length() >= 10)
                std::cout << c.getLastName().substr(0, 9) << ".|";
            else
                std::cout << std::setw(10) << c.getLastName() << "|";
            if (c.getNickname().length() >= 10)
                std::cout << c.getNickname().substr(0, 9) << ".|" << std::endl;
            else
                std::cout << std::setw(10) << c.getNickname() << "|" << std::endl;
            empty = false;
        }
    }
    return (empty);
}

int PhoneBook::getNextIndex()
{
    int index = 0;

    for (Contact c : this->contacts)
    {
        if (c.getIndex() == -1) break;
        else index++;
    }
    if (index == 8) index = 0;
    return (index);
}