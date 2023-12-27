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
    Animal(const Animal &original);
    Animal &operator=(const Animal &original);
    virtual void makesound() const;
    virtual ~Animal();
    std::string getType()const;
};

#endif