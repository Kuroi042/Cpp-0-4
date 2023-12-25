#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
    private:

    public :
        Dog();
        ~Dog();
        Dog(const Dog &original);
        Dog &operator=(const Dog& original);
        void makesound()const;
        std::string getType()const;
};

#endif