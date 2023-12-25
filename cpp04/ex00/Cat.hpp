#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
    private:

    public :
    Cat();
    Cat(Cat &original);
    Cat &operator=(Cat &oroginal);
    ~Cat();
    void makesound();
    std::string getype();
};




#endif