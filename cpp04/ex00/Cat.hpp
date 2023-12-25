#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
    private:

    public :
    Cat();
    Cat(const Cat &original);
    Cat &operator=(const Cat &oroginal);
    ~Cat();
    void makesound() const;
    std::string getType() const;
};




#endif