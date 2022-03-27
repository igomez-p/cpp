/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-p <igomez-p@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 09:26:06 by igomez-p          #+#    #+#             */
/*   Updated: 2022/03/27 14:04:12 by igomez-p         ###   ########.fr       */
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

int PhoneBook::read_command()
{
    std::string cmd;
    int index;
    Contact pers;

    std::cout << "Insert command: ";
    std::cin >> cmd;

    if (cmd.compare(ADD) == 0)
        this->add_contact(this->getNextIndex(), pers);
    else if (cmd.compare(SEARCH) == 0)
    {
        this->print_contacts();
        std::cout << "Insert index: ";
        std::cin >> index;
        this->search_contact(index);
    }
    else if (cmd.compare(EXIT) == 0)
        return (0);
    return (1);
}

void PhoneBook::add_contact(int index, Contact pers)
{
    std::string name1, name2, nick, phone, secret;

    std::cout << "Insert first name: ";
    std::cin >> name1;
    std::cout << "Insert last name: ";
    std::cin >> name2;
    std::cout << "Insert nickname: ";
    std::cin >> nick;
    std::cout << "Insert phone: ";
    std::cin >> phone;
    std::cout << "Insert darkest secret: ";
    std::cin >> secret;

    pers = Contact(this->getNextIndex(), name1, name2, nick, phone, secret);
    this->add_contact(index, pers);
}

void PhoneBook::search_contact(int index)
{
    for (Contact c : this->contacts)
        if (c.getIndex() == index) c.getContact(index);
}

void PhoneBook::print_contacts()
{
    for (Contact c : this->contacts)
    {
        std::cout << std::setw(9) << c.getIndex() << "|";
        if (c.getFirstName().length() >= 10)
            std::cout << c.getFirstName().substr(0, 9) << ".|";
        else
            std::cout << std::setw(10 - c.getFirstName().length()) << c.getFirstName() << "|";
        if (c.getLastName().length() >= 10)
            std::cout << c.getLastName().substr(0, 9) << ".|";
        else
            std::cout << std::setw(10 - c.getLastName().length()) << c.getLastName() << "|";
        if (c.getNickname().length() >= 10)
            std::cout << c.getNickname().substr(0, 9) << ".|" << std::endl;
        else
            std::cout << std::setw(10 - c.getNickname().length()) << c.getNickname() << "|" << std::endl;
    }
}

int PhoneBook::getNextIndex()
{
    int index = 0;

    for (Contact c : this->contacts)
        if (c.getIndex() != -1) index++;
    return (index);
}