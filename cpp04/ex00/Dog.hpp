#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
    private:

    public :
        Dog(){
         std::cout<<"calling Dog constractor\n";   
        }
        ~ Dog(){
         std::cout<<"calling Deconstractor\n";   
        }
        void makesound()
            {
                std::cout<<"haw haw\n";
            }
};

#endif