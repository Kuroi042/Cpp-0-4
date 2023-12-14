/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 05:34:03 by mbouderr          #+#    #+#             */
/*   Updated: 2023/12/13 22:18:59 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include "Phonebook.hpp"



Phonebook::Phonebook()
{
    NumContact = 0;
}
void Phonebook::Cmd()
{
    std::string input;
    std::cout << "====>>Welcome to Phonebook enter | ADD | SEARCH | EXIT |<<====" << std::endl;
    std::getline(std::cin, input);
    if (input == "ADD")
        AddCmd();
    else if (input == "SEARCH")
        SearchCmd();
    else if (input == "EXIT" || std::cin.eof())
        ExitCmd();
    else
        Cmd();
}

void Phonebook::AddCmd()
{
    std::string var;
    if (NumContact > 7) // check for number of contact
        std::cout << "Phonebook contact is full Sadge ! your DAta will be lost  " << std::endl;

    while (true) // 
    {
        std::cout << "Enter the first name: ";
        std::getline(std::cin, var);
        if (std::cin.eof())
            break;
        if (!var.empty() && !isWhitespace(var))
        {
            contact[NumContact % 8].setName(var);
            break;
        }
        else
        {
 std::cout << "First name cannot be empty  Try again.\n";        }
    }

    while (true)
    {
        std::cout << "Enter the last name: ";
        std::getline(std::cin, var);
        if (std::cin.eof())
            break;
       if (!var.empty() && !isWhitespace(var))
        {
            contact[NumContact % 8].setLastname(var);
            break;
        }
        else
        {
             std::cout << "Last name cannot be empty  Try again.\n";
        }
    }

while (true)
{
    std::cout << "Enter the  Nickname: ";
    std::getline(std::cin, var);
    if (std::cin.eof())
        break;
    if (!var.empty() && !isWhitespace(var))
    {
        contact[NumContact % 8].setNickname(var);
        break;
    }
    else
    {
        std::cout << "Nickname cannot be empty  Try again.\n";
    }
}

    while (true)
    {
        std::cout << "Enter the Number: ";
        std::getline(std::cin, var);
        if (std::cin.eof())
            break;
        if (!var.empty() && !isWhitespace(var))
        {
            contact[NumContact % 8].setNumber(var);
            break;
        }
        else
        {
 std::cout << "Number cannot be empty  Try again.\n";        }
    }
    while (true)
    {
        std::cout << "Enter your secret: ";
        std::getline(std::cin, var);
        if (std::cin.eof())
            break;
         if (!var.empty() && !isWhitespace(var))
        {
            contact[NumContact % 8].set_Secret(var);
            break;
        }
        else
        {
 std::cout << "Secret cannot be empty Try again.\n";        }
    }

    std::cout << "Contact added successfully!\n";

    NumContact++;
    Cmd();
}

void Phonebook::SearchCmd()
{

    std::string index;
    std::cout << " ___________________________________________ \n";
    std::cout << "|     NumContact|First Name| Last Name|  Nickname|\n";
    std::cout << "|----------|----------|----------|----------|\n";
    unsigned int i = 0;
    while (i < NumContact && i < 8) //check  not exceed 8 for overwriting data
    {
        std::cout << "|" << std::setw(10) << i + 1 << "|"
                  << std::setw(10) << contact[i].getName() << "|"
                  << std::setw(10) << contact[i].getLastname() << "|"
                  << std::setw(10) << contact[i].getNickname() << "|\n";
        i++;
    }
    std::cout << " ___________________________________________ \n";
    while (NumContact) 
    {
        std::cout << "enter the NumContact _";
        getline(std::cin, index);
        if (std::cin.eof())
              ExitCmd();
        if (NumContact && (index.length() != 1 || index[0] < '1' || (unsigned int)index[0] > NumContact + '0'))
            printf("invalid NumContact  sadge\n");
   
        else if ((index[0] >= '1' && index[0] <= '9' && index.length() == 1) && ((unsigned int)index[0] - '0' <= NumContact))
           break;
    }
    if(NumContact)
        {
                    std::cout<< "First Name : "<<contact[index[0] - '1'].getName()<<std::endl;
        std::cout<< "Last Name : "<<contact[index[0] - '1'].getLastname()<<std::endl;
        std::cout<< "Nick Name : "<<contact[index[0] - '1'].getNickname()<<std::endl;
        std::cout<< "Phone Number : "<<contact[index[0] - '1'].getNumber()<<std::endl;
        std::cout<< "Darkest Secret : "<<contact[index[0] - '1'].get_Secret()<<std::endl;
        }
    Cmd();
}
 
Phonebook::~Phonebook()
{
    std::cout << "Ciao !!\n";
}

void Phonebook::ExitCmd()
{
        Phonebook::~Phonebook();
        exit(0);
}

bool isWhitespaceHelper(unsigned char c) {
    return std::isspace(c);
}

bool isWhitespace(const std::string& str) {
    return std::all_of(str.begin(), str.end(), isWhitespaceHelper);
}  