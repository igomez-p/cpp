/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-p <igomez-p@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 09:40:56 by igomez-p          #+#    #+#             */
/*   Updated: 2022/03/27 10:02:36 by igomez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

#define ADD     "ADD"
#define EXIT    "EXIT"
#define SEARCH  "SEARCH"

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
    Contact(std::string name1, std::string name2, std::string nick, std::string phone, std::string secret);
    ~Contact();
    getContact(int index);
    setContact(Contact pers);
    setName(std::string first, std::string last);
    setNickname(std::string nick);
    setPhone(std::string phone);
    setSecret(std::string secret);
};