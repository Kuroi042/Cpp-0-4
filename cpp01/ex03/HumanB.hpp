
#ifndef HUMAN_B
#define HUMAN_B
#include <iostream>
#include  "Weapon.hpp"
#include <stdlib.h>
#include <unistd.h>

using namespace std;

class HumanB
{
    private: 
        Weapon *weapon;
        std::string Name;
    public:
        HumanB();
        HumanB(std::string name);
        void attack();
        const std::string&       getName();
        void setName(std::string Newname);
        void setWeapon(Weapon &Weapon );

};

#endif