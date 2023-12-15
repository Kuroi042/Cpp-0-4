#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    Hit_points = 100;
    Energy_point = 50;
    Attack_Damage = 20;
}
ScavTrap::ScavTrap( const std::string  NameSv) 
{
    std::cout << "Constractor Scav !! " << NameSv << " is initiated\n";
    Hit_points = 100;
    Energy_point = 50;
    Attack_Damage = 20;
}
void ScavTrap::attack(const std::string &target)
{
    if (Energy_point > 0)
    {
        std::cout << "Attack ScavTrap !! " << Name << " attacks " << target << " causing " << Attack_Damage << " point of damage\n";
        Energy_point--;
    }
    else
        return;
}

void ScavTrap::guardGate(){
    std::cout<<"Scav "<<Name<<" is now in Gate keeper mode\n";
}
ScavTrap::~ScavTrap()
    {
    std::cout << "Calling deconstractor !! For the ScavTrap \n";
    }

