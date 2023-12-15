#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    Hit_points = 100;
    Energy_point = 50;
    Attack_Damage = 20;
}
ScavTrap::ScavTrap( std::string  NameSv) 
{
    std::cout << "Constractor Scav !! " << NameSv << " is initiated\n";
    Hit_points = 100;
    Energy_point = 50;
    Attack_Damage = 20;
}
ScavTrap::ScavTrap( ScavTrap &original)
{
    std::cout << "ScavTrap Copy constractor called" << std::endl;
        original = *this;
}

ScavTrap &ScavTrap::operator=(ScavTrap &original)
{
   std::cout << "Copy assignment operator called" << std::endl;
    // if (this != &original)
    // {
    // *this = original;
    // }
    original.Attack_Damage = this->Attack_Damage;
    std::cout << this->Attack_Damage << "hhh\n";
    original.Energy_point = this->Energy_point;
    original.Hit_points = this->Hit_points;
    original.Max_hp = this->Max_hp;
    original.Name = this->Name;
    return *this;
   
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

