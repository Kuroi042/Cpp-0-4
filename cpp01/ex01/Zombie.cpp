#include "Zombie.hpp"


Zombie::Zombie()
    {
        
    }
Zombie::Zombie(std::string name)
    {
        cout<<"hord zombie called "<<name<< " is created\n";
    }
Zombie::~Zombie()
{   
cout<<"Hord Zombie " << name<< " is dead\n";
}

 void Zombie::anounce(void)
{
    cout<<name <<" BRAIIINNZ\n";
}

void Zombie::setName(std::string  Newname)
        {
            name = Newname;
        }
