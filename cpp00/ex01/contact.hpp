/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:46:36 by mbouderr          #+#    #+#             */
/*   Updated: 2023/11/12 11:46:37 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {

    private:
        std::string name;
        std::string lastname;
        std::string nickname;
        std::string number;
        std::string secret;

    public:
            void setName(std::string Newname); 
            void setLastname(std::string NewLastname);
            void setNickname(std::string NewNickname);
            void setNumber(std::string NewNumber);
            void set_Secret(std::string NewSecret);

                std::string getName();
                std::string getLastname();
                std::string getNickname();
                std::string getNumber();
                std::string get_Secret();
};

#endif