/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:46:39 by mbouderr          #+#    #+#             */
/*   Updated: 2023/11/12 13:26:08 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <iomanip>
#include <stdlib.h>
#include<iostream>

class Phonebook {

private:
    Contact contact[8];
 unsigned int index;
public:
        Phonebook();
        ~Phonebook();      
        void Cmd();
        void AddCmd();
        void SearchCmd();
        void ExitCmd();
        
};


#endif