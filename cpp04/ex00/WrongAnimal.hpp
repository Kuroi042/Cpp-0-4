#ifndef WRONGANIMAL
#define WRONGANIMAL
#include <iostream>

class WrongAnimal
{
protected:
    std::string Type;
public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal( WrongAnimal &original);
    WrongAnimal &operator=(const WrongAnimal &original);
    std::string getType()const;
    void makesound()const;


};








#endif