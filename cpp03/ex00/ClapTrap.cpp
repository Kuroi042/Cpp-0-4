#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    Name = name;
    std::cout << Name << " is initiated\n";
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
    if (Energy_point == 0)
    {
        std::cout << "Sadge No Energy left for " << Name << "\n";
        return;
    }

    std::cout << "ClapTrap " << Name << " attacks " << target << " causing " << Attack_Damage << " point of damage\n";
    Energy_point--;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    
    if (Energy_point == 0)
    {
        std::cout << "Sadge No Energy left for " << Name << "\n";
        return;
    }

    std::cout << "ClapTrap " << Name << " is being repaired with " << amount << "\n";
    Energy_point--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if(amount >0)
        {
    std::cout << "ClapTrap " << Name << " is taking " << amount << " amount of damage \n";
        }
}

ClapTrap::~ClapTrap()
{
    std::cout << "the " << Name << " is dead :( \n";
}