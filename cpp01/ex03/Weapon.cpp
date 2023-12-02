#include "Weapon.hpp"


Weapon::Weapon(std::string text)
{
    cout << "Weapon is ready to Use \n";
    Type = text;

}
 
void Weapon::setType(std::string newType)
{
        Type  = newType;
}

 const   std::string& Weapon::getType() // reference of return value
{ 
        return Type;
}