/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-p <igomez-p@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 09:40:54 by igomez-p          #+#    #+#             */
/*   Updated: 2022/03/27 14:05:29 by igomez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
    this->index = -1;
    this->first_name = "";
    this->last_name = "";
    this->nickname = "";
    this->phone = "";
    this->darkest_secret = "";
}

Contact::Contact(int idx, std::string name1, std::string name2, std::string nick, std::string phone, std::string secret)
{
    this->index = idx;
    this->first_name = name1;
    this->last_name = name2;
    this->nickname = nick;
    this->phone = phone;
    this->darkest_secret = secret;
}

Contact::~Contact()
{
    this->index = -1;
    this->first_name = "";
    this->last_name = "";
    this->nickname = "";
    this->phone = "";
    this->darkest_secret = "";
}

void Contact::getContact(int index)
{
    if (this->index == index)
    {
        std::cout << "First name:     " << this->first_name << std::endl;
        std::cout << "Last name:      " << this->last_name << std::endl;
        std::cout << "Nickname:       " << this->nickname << std::endl;
        std::cout << "Phone:          " << this->phone << std::endl;
        std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
    }
}

void Contact::setContact(int index, Contact pers)
{
    this->index = index;
    this->first_name = pers.first_name;
    this->last_name = pers.last_name;
    this->nickname = pers.nickname;
    this->phone = pers.phone;
    this->darkest_secret = pers.darkest_secret;
}

std::string Contact::getFirstName() { return (this->first_name); }
std::string Contact::getLastName() { return (this->last_name); }
std::string Contact::getNickname() { return (this->nickname); }
int Contact::getIndex() { return (this->index); }
void Contact::setIndex(int index) { this->index = index; }