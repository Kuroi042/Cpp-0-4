#include "Zombie.hpp"


    Zombie::Zombie(std::string newName) // constractor 
{
    name = newName; 
     std::cout<<"zombie  " <<name<<" is spawned\n";// contractor to creat name for every new zombie created
}

    Zombie::~Zombie()
    {
    std::cout<<"zombie "<<name<<" is dead\n";

    }

void Zombie::anounce()
    {
        std::cout<<name<<" Brainzzzzzzzz\n";
    }

