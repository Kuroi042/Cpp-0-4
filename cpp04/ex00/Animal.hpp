#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include  <iostream>
#include <string>


class Animal
{
protected:
    std::string Type;
public:
    Animal();
    virtual ~Animal();
    Animal(Animal &original);
    Animal &operator=(Animal &original);
    virtual void makesound();
    std::string getType();
};







#endif