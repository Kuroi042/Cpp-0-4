#include "Zombie.hpp"


Zombie::Zombie()
    {      
    }
Zombie::~Zombie()
{   
std::cout<<"Hord Zombie " << name<< " is dead\n";
}

 void Zombie::anounce(void)
{
    std::cout<<name <<" BRAIIINNZ\n";
}

void Zombie::setName(std::string  Newname)
        {
            name = Newname;
        }
