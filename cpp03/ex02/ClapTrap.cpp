#include "ClapTrap.hpp"
 ClapTrap::ClapTrap()
 {
            std::cout << "Constractor ClapTrap !!  is initiated\n";

    Hit_points = 10;
    Energy_point = 5;
    Attack_Damage = 0;
    Max_hp = Hit_points;
 }

ClapTrap::ClapTrap(std::string name)
{
    Name = name;
    std::cout << "Constractor !! " << Name << " is initiated\n";
    Hit_points = 10;
    Energy_point = 5;
    Attack_Damage = 0;
    Max_hp = Hit_points;
}

ClapTrap::ClapTrap(const ClapTrap &original)
{
    std::cout << "copt constractor is initilized\n";
    Name = original.Name;
    Hit_points = original.Hit_points;
    Energy_point = original.Energy_point;
    Attack_Damage = original.Attack_Damage;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &original)
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

void ClapTrap::attack(const std::string &target)
{
    if (Energy_point > 0)
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
    if (Hit_points > 0 ||Energy_point > 0 ){
    if (amount > INT_MAX)
    {
        std::cout << "be repaired !! input of |Healing value| isnt correct \n";
        return;
    }
    Energy_point--;
    Hit_points += amount;
    }
    if (Hit_points <= 0 || Energy_point <= 0){
        std::cout << "No more Energy Points left " << Energy_point << std::endl;
        return;
    }
    // std::cout << "Your HP now is " << Hit_points << std::endl;
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
    std::cout << "Take damage!!  " << Name << " is taking " << amount << " amount of damage \n";
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

        // ClapTrap *base = new ScavTrap;
        // base->attack("zb");