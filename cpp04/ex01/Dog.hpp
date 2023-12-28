#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include <iostream>
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public :
        Dog();
        ~Dog();
        Dog(const Dog &original);
        Dog &operator=(const Dog& original);
        void makesound()const;
        Brain& getBrain() const;

 
};

#endif