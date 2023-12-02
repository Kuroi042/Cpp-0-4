#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


#include <iostream>

class Zombie
{
    private:
             std::string name;
    public:
            Zombie(std::string newName); // constractor 
            ~Zombie();
            void anounce(void);
};
            Zombie* newZombie( std::string name );
            void randomChump( std::string name );






#endif