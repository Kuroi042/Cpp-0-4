#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
    Hit_points = 100;
    Energy_point = 100;
    Attack_Damage = 30;
}
FragTrap::FragTrap(  std::string  NameFg) :ClapTrap(NameFg)
{
    Name  = NameFg;
    std::cout << "Constractor Frag !! " << Name << " is initiated\n";
    Hit_points = 100;
    Energy_point = 100;
    Attack_Damage = 30;
}
FragTrap::FragTrap( FragTrap &original):ClapTrap(original)
{

        std::cout<<"Calling copy constractor for FragTrap\n";
        Hit_points = original.Hit_points;
    Energy_point = original.Energy_point;
    Attack_Damage = original.Attack_Damage;    

}


FragTrap &FragTrap::operator=( FragTrap &original)
{
    if (this != &original)
    {
        std::cout << "assignment operator called for fragtrap" << std::endl;
        Name = original.Name;
        Hit_points = original.Hit_points;
        Energy_point = original.Energy_point;
        Attack_Damage = original.Attack_Damage;
    }
    return *this;
}
void FragTrap::attack(const std::string &target)
{
    if(Hit_points <=0){
        std::cout<<Name <<" is Low Hp Cant atttack !! \n";
        return;
    }
    if (Energy_point > 0)
    {
        std::cout << "Attack FragTrap !! " << Name << " attacks " << target << " causing " << Attack_Damage << " point of damage\n";
        Energy_point--;
    }
    else
        return;
}

void FragTrap::highFivesGuys(void){
      if(Hit_points<=0 || Energy_point<=0)
    {
         std::cout<<"So Infortunate Frag "<<Name<<" can't make a high five\n";
        return;
    }
    else 
    std::cout<<"FragTrap "<<Name<<" is waving for high five \n";

}
FragTrap::~FragTrap()
    {
    std::cout << "Calling deconstractor !! For the FragTrap \n";
    }
