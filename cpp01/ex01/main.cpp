#include "Zombie.hpp"

int main()
    {
       Zombie *horde =  zombieHorde(12, "charaf"); 
            delete[] horde; // free the  zb[i] since i use new zombie[i]
            return 0;
    }
