#include "Weapon.hpp"

// Weapon::Weapon()
//         {
//         }

Weapon::Weapon(std::string text)
{
    cout << "Weapon is ready to Use \n";
    Type = text;

}
 
 const   std::string& Weapon::getType() // reference of return value
 { 
        return Type;
}
void Weapon::setType(std::string newType)
{
        Type  = newType;
}