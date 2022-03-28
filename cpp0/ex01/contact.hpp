/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-p <igomez-p@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 09:40:56 by igomez-p          #+#    #+#             */
/*   Updated: 2022/03/28 14:59:20 by igomez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CONTACT_H__
#define __CONTACT_H__

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
    
private:
    int index;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone;
    std::string darkest_secret;

public:
    Contact();
    Contact(int idx, std::string name1, std::string name2, std::string nick, std::string phone, std::string secret);
    ~Contact();
    void getContact(int index);
    void setContact(int index, Contact pers);
    std::string getFirstName();
    std::string getLastName();
    std::string getNickname();
    int getIndex();
    void setIndex(int index);
};

#endif