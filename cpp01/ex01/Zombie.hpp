#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

using namespace std;
#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string name);
        void setName(std::string name);
        ~Zombie(); 
        void anounce(void);   
};

     Zombie* zombieHorde( int N, std::string name );




#endif
