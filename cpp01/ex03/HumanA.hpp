#ifndef HUMAN_A
#define HUMAN_A
#include <iostream>
#include  "Weapon.hpp"


using namespace std;

class HumanA
{
    private: 
        Weapon& weapon;
        std::string name;
    public:
        HumanA(std::string HumanANameWeapon , Weapon& humanAWeapon);
        void attack();
        const std::string& getName();
        void setName(std::string Newname);
};

#endif
