#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    Name = name;
    std::cout << "Constractor ClapTrap !! " << Name << " is initiated\n";
    Hit_points = 10;
    Energy_point = 2;
    Attack_Damage = 0;
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
    
    if (Energy_point <= 0 || Hit_points<=0)
    {
        std::cout << "Attack !" << Name << " is dead due to low Energy point :( \n";
            return;

    } 
    std::cout << "Attack !! " << Name << " attacks " << target << " causing " << Attack_Damage << " point of damage\n";
    Energy_point--;
    // std::cout << "Attack !! HP left == " << Hit_points << "\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{

    if (Hit_points <= 0 ||Energy_point <= 0 )
            return;
    if (amount < 0 || amount > INT_MAX)
    {
        std::cout << "be repaired !! input of |Healing value| isnt correct \n";
        return;
    }
   std::cout << "beRepaired  !! " << Name << " is being repaired with " << amount << "\n";
    Energy_point--;
    Hit_points+=amount;
     std::cout << "be repaired !! HP left == " << Hit_points << "\n";
    if (Energy_point <= 0)
    {
       std::cout << "be repaired !! the " << Name << " is dead due to low energy point  :( \n";
            return;

    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
     if (Hit_points <= 0 ||Energy_point <= 0 )
{
    // std::cout << "Take_damage !! HP left ==     " << Hit_points << "\n";
    // std::cout << "Take_damage !! Energy left == " << Energy_point << "\n";
    // std::cout << "Take damage !! the " << Name << " is dead :( \n";
    return;
}
    if (amount < 0 || amount > INT_MAX)
    {
        std::cout << "Take damage !! input of |Damage| isnt correct \n";
            return;

    }
    if (amount > 0)
    {
        std::cout << "Take damage!!  " << Name << " is taking " << amount << " amount of damage \n";
        Hit_points -= amount;
    }

 if (Hit_points <= 0 ||Energy_point <= 0 )
{   
    std::cout << "Take_damage !! HP left     ==     " << Hit_points << "\n";
    std::cout << "Take_damage !! Energy left ==     " << Energy_point << "\n";
    std::cout << "Take damage !! the " << Name << " is dead :( \n";

    return;
}
//     std::cout << "Take_damage !! HP left == " << Hit_points << "\n";

//    std::cout << "Take_damage !! your Enerypoint left == " << Energy_point << "\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "deconstractor !!  the ClapTrap " << Name << " is dead No Resurrection sadly :(  \n";
}