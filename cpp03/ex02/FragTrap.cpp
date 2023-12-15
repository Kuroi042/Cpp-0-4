#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    Hit_points = 100;
    Energy_point = 100;
    Attack_Damage = 30;
}
FragTrap::FragTrap( const std::string  NameFg) 
{
    Name  = NameFg;
    std::cout << "Constractor Frag !! " << Name << " is initiated\n";
    Hit_points = 100;
    Energy_point = 100;
    Attack_Damage = 30;
}
FragTrap::FragTrap(const FragTrap &original)
{
    std::cout << "copt constractor is initilized\n";
    Name = original.Name;
    Hit_points = original.Hit_points;
    Energy_point = original.Energy_point;
    Attack_Damage = original.Attack_Damage;
}
FragTrap &FragTrap::operator=(const FragTrap &original)
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
void FragTrap::attack(const std::string &target)
{
    if (Energy_point > 0)
    {
        std::cout << "Attack FragTrap !! " << Name << " attacks " << target << " causing " << Attack_Damage << " point of damage\n";
        Energy_point--;
    }
    else
        return;
}

void FragTrap::highFivesGuys(void){
    std::cout<<"FragTrap "<<Name<<" is waving for high five \n";

}
FragTrap::~FragTrap()
    {
    std::cout << "Calling deconstractor !! For the FragTrap \n";
    }
