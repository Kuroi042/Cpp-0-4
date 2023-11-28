#include "Zombie.hpp"

    Zombie* newZombie( std::string name )
    {
            Zombie* zombie = new Zombie(name);  // constractor 
            return zombie;
           
    }