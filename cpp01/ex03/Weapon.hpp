#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
using namespace std;

class Weapon
{
    private :
        std::string Type;
    public :
        Weapon();
         Weapon(std::string text);
        const std::string& getType() ;
        void setType(std::string newType);

};



#endif