#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include <iostream>
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *brain;

public:
    Cat();
    Cat(const Cat &original);
    Cat &operator=(const Cat &original);
    ~Cat();
    void makesound()const;
    Brain& getBrain()const;
};

#endif