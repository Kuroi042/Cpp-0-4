#include "Zombie.hpp"




Zombie* zombieHorde( int N, std::string name )
{   

   
     int i = 0;
         Zombie *zb = new Zombie[N];
     while(i<N)
        {
            zb[i].setName(name);
            zb[i].anounce();
            i++; 
        }

         return zb;

 
    
}