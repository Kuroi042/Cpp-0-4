#include "Zombie.hpp"


    Zombie::Zombie(std::string newName) // constractor 
{
    name = newName; 
     cout<<"zombie  " <<name<<" is spawned\n";// contractor to creat name for every new zombie created
}

    Zombie::~Zombie()
    {
    cout<<"zombie "<<name<<" is dead\n";

    }

void Zombie::anounce()
    {
        cout<<name<<" Brainzzzzzzzz\n";
    }

