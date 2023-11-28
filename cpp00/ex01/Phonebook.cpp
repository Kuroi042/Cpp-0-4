/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 05:34:03 by mbouderr          #+#    #+#             */
/*   Updated: 2023/11/21 22:23:25 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include "Phonebook.hpp"

Phonebook::Phonebook()
{
    index = 0;
}
void printWithMaxWidth(std::string str, size_t length)
{        
    for (size_t i = 0; i < length; ++i)
    {
        if (i < str.length())
        {
            std::cout << str[i];
        }
        else
        {
            std::cout << '.';
        }
    }
}

void prinTruncatedWithMaxWidth(std::string str, size_t length)
{
    if (str.length() <= length)
    {
        std::cout << std::setw(length) << std::right << str;
    }
    else
    {
        printWithMaxWidth(str.substr(0, length - 1), length);
    }
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
    if (index > 7)
        std::cout << "Phonebook contact is full YOUR DAte will be lost  " << std::endl;

    while (true)
    {
        std::cout << "Enter the first name: ";
        std::getline(std::cin, var);
        if (std::cin.eof())
            ExitCmd();
        if (!var.empty())
        {
            contact[index % 8].setName(var);
            break;
        }
        else
        {
            std::cout << "First name cannot be empty. Try again.\n";
        }
    }

    while (true)
    {
        std::cout << "Enter the first last name: ";
        std::getline(std::cin, var);
        if (std::cin.eof())
            ExitCmd();
        if (!var.empty())
        {
            contact[index % 8].setLastname(var);
            break;
        }
        else
        {
            std::cout << "First last name cannot be empty. Try again.\n";
        }
    }

    while (true)
    {
        std::cout << "Enter the first Nickname: ";
        std::getline(std::cin, var);
        if (std::cin.eof())
            ExitCmd();
        if (!var.empty())
        {
            contact[index % 8].setNickname(var);
            break;
        }
        else
        {
            std::cout << "Nick name cannot be empty. Try again.\n";
        }
    }

    while (true)
    {
        std::cout << "Enter the Number: ";
        std::getline(std::cin, var);
        if (std::cin.eof())
            ExitCmd();
        if (!var.empty())
        {
            contact[index % 8].setNumber(var);
            break;
        }
        else
        {
            std::cout << "Number cannot be empty. Try again.\n";
        }
    }
    while (true)
    {
        std::cout << "Enter your secret: ";
        std::getline(std::cin, var);
        if (std::cin.eof())
            ExitCmd();
        if (!var.empty())
        {
            contact[index % 8].set_Secret(var);
            break;
        }
        else
        {
            std::cout << "Secret cannot be empty. Try again.\n";
        }
    }

    std::cout << "Contact added successfully!\n";

    index++;
    Cmd();
}

void Phonebook::SearchCmd()
{

    std::string amount;
    std::cout << " ___________________________________________ \n";
    std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
    std::cout << "|----------|----------|----------|----------|\n";
    int i = 0;
    while (i < index && i < 8)
    {
        std::cout << "|" << std::setw(10) << i + 1 << "|"
                  << std::setw(10) << contact[i].getName() << "|"
                  << std::setw(10) << contact[i].getLastname() << "|"
                  << std::setw(10) << contact[i].getNickname() << "|\n";
        i++;
    }
    std::cout << " ___________________________________________ \n";
    while (index)
    {
        std::cout << "enter the index _";
        getline(std::cin, amount);
        if (std::cin.eof())
              ExitCmd();
        if (index && (amount.length() != 1 || amount[0] < '1' || (unsigned int)amount[0] > index + '0'))
            printf("invalid index  sadge\n");
   
        else if ((amount[0] >= '1' && amount[0] <= '9' && amount.length() == 1) && ((unsigned int)amount[0] - '0' <= index))
           break;
    }
    if(index)
        {
                    std::cout<< "First Name : "<<contact[amount[0] - '1'].getName()<<std::endl;
        std::cout<< "Last Name : "<<contact[amount[0] - '1'].getLastname()<<std::endl;
        std::cout<< "Nick Name : "<<contact[amount[0] - '1'].getNickname()<<std::endl;
        std::cout<< "Phone Number : "<<contact[amount[0] - '1'].getNumber()<<std::endl;
        std::cout<< "Darkest Secret : "<<contact[amount[0] - '1'].get_Secret()<<std::endl;
            

        }
    Cmd();
}

Phonebook::~Phonebook()
{
    std::cout << "See you soon, Good bye !!\n";
}

void Phonebook::ExitCmd()
{
        Phonebook::~Phonebook();
        exit(0);
}

