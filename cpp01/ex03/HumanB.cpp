#include "HumanB.hpp"



HumanB::HumanB()
{
	std::cout << "HumanB : is Spawned " << std::endl;
}

HumanB::HumanB(std::string name  )
{
    weapon = NULL;
    std::cout<<"HumanB is Spawned\n"<<endl;
    Name = name;
}

void HumanB::attack()
    {
        if(weapon!=NULL && weapon->getType().length()>0)
        std::cout << Name << " is using : " << (*weapon).getType() <<" to attack\n";
        else 
            std::cout<< Name << " attacks with bare hands  " <<std::endl;
    }

void	HumanB::setWeapon(Weapon &newWeapon)
{
	weapon = &newWeapon;
}

const std::string&	HumanB::getName()
{
	return (Name);
}

void HumanB::setName(std::string Newname)
{
     Name = Newname;
}