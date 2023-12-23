#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
        std::cout <<"Calling Contractor For ScavTrap !!\n";

        
    Hit_points = 100;
    Energy_point = 50;
    Attack_Damage = 20;
}


ScavTrap::ScavTrap( std::string  NameSv) :ClapTrap(NameSv)
{
    std::cout << "ScavTrap "<<NameSv<<" constractor called\n ";
    Hit_points = 100;
    Energy_point = 50;
    Attack_Damage = 20;
}

ScavTrap::ScavTrap( ScavTrap &original) :ClapTrap( original)
{
    std::cout << "ScavTrap Copy constractor called" << std::endl;
    Attack_Damage=     original.Attack_Damage;   
    Energy_point=      original.Energy_point  ; 
Hit_points =  original.Hit_points ;

}
ScavTrap &ScavTrap::operator=(ScavTrap &original)
{
    if(&original != this){
   std::cout << "assignment operator called" << std::endl;
    Attack_Damage = original.Attack_Damage;
   Energy_point =  original.Energy_point;
    Hit_points =  original.Hit_points;
     Name =  original.Name;
    }
    return *this;
   
}
void ScavTrap::attack(const std::string &target)
{
     if(Hit_points <=0){
        std::cout<<Name <<" is Low Hp Cant atttack !! \n";
        return;
     }
    if (Energy_point > 0)
    {
        std::cout << "Attack ScavTrap !!" << Name << " attacks " << target << " causing " << Attack_Damage << " point of damage\n";
        Energy_point--;
    }
    
    else
        return;
}

void ScavTrap::guardGate(){
    if(Hit_points<=0 || Energy_point<=0)
    {
         std::cout<<"Scav "<<Name<<"  Gate keeper mode disable\n";
        return;
    }
else 
    std::cout<<"Scav "<<Name<<" is now in Gate keeper mode \n";
}
ScavTrap::~ScavTrap()
    {
    std::cout << "Calling destractor For ScavTrap  \n";
    }


