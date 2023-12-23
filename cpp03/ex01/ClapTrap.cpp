#include "ClapTrap.hpp"
#include <stdio.h>
 ClapTrap::ClapTrap()
 {
     std::cout << "Calling Contractor For ClapTrap !!\n";
    Hit_points = 10;
    Energy_point = 5;
    Attack_Damage = 0;
    Max_hp = Hit_points;
 }

ClapTrap::ClapTrap(std::string name)
{
    Name = name;
    std::cout << Name << " is Called !!\n";
    Hit_points = 10;
    Energy_point = 5;
    Attack_Damage = 0;
    Max_hp = Hit_points;
}

ClapTrap::ClapTrap( ClapTrap &original)
{
    std::cout << "copt constractor is initilized\n";
    Name = original.Name;
    Hit_points = original.Hit_points;
    Energy_point = original.Energy_point;
    Attack_Damage = original.Attack_Damage;
}
ClapTrap &ClapTrap::operator=( ClapTrap &original)
{
    if (this != &original)
    {
        Name = original.Name;
        Hit_points = original.Hit_points;
        Energy_point = original.Energy_point;
        Attack_Damage = original.Attack_Damage;
    }
    return *this;
}

void ClapTrap::attack( const std::string &target)
{

    if(Hit_points <0)
        return;

    if (Energy_point > 0  )
    {
        std::cout << "Attack !! " << Name << " attacks " << target << " causing " << Attack_Damage << " point of damage\n";
        Energy_point--;
    }
    else
        return;
}

void ClapTrap::beRepaired(unsigned int amount)
{

    if (Hit_points <= 0 || Energy_point <= 0){
        return;
    }
    // printf("hitpoint == %d\n", Hit_points);
    // printf("Energy point == %d\n", Energy_point);
    if (Hit_points > 0 ||Energy_point > 0 ){
    if (amount > INT_MAX)
    {
    std::cout <<"Be repaired !! input of |Healing value| isnt correct \n";
        return;
    }
    std::cout <<"be repaired !! " <<Name<< " is repaired with (" <<amount<< ") hp\n";
    Energy_point--;
    Hit_points += amount;
    }
    if (Hit_points <= 0 || Energy_point <= 0){
        std::cout << "No more Energy Points left " << Energy_point << std::endl;
        return;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{

    if (Hit_points <= 0)
        return;
    if ( amount > INT_MAX)
    {
        std::cout << "Take damage !! input of |Damage| isnt correct \n";
            return;

    }
    std::cout << "Take damage!!  " << Name << " is taking (" << amount << ") amount of damage \n";
    Hit_points -= amount;
    if (Hit_points <= 0)
    {
     std::cout << "Take damage !! the " << Name << " is dead :( \n";
            return;
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << "Calling destractor For ClapTrap !!\n";
}

