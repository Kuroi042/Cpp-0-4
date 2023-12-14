#include "ScavTrap.hpp"

ScavTrap::ScavTrap( const std::string  NameSv, const std::string  NameTr ): ClapTrap( NameTr)
{
    std::cout << "Constractor Scav !! " << NameSv << " is initiated\n";
    Hit_points = 100;
    Energy_point = 50;
    Attack_Damage = 20;
}

void ScavTrap::guardGate(){
    std::cout<<"ScavTrap "<<Name<<" is now in Gate keeper mode\n";
}
ScavTrap::~ScavTrap()
    {
    std::cout << "deconstractor !!  the ScavTrap " << Name << " is dead sadly :(  \n";
    }

