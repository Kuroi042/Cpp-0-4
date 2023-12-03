/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:46:39 by mbouderr          #+#    #+#             */
/*   Updated: 2023/11/29 00:11:56 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <iomanip>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

class Phonebook {

private:
    Contact contact[8];
 unsigned int NumContact;
public:
        Phonebook();
        ~Phonebook();      
        void Cmd();
        void AddCmd();
        void SearchCmd();
        void ExitCmd();
        
};
bool isWhitespace(const std::string& str);
#endif