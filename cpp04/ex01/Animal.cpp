#include "Animal.hpp"


    Animal::Animal(){
            Type =  "Empty";
        std::cout<<"calling Animal default constractor  \n";
    }

    Animal::Animal(const Animal &original){
        Type = original.Type;
        std::cout<<"calling Animal copy constractor\n";
    }
    Animal::~Animal(){
        std::cout<<"calling Animal deconstractor\n";
    }

    Animal &Animal::operator=(const Animal &original){
            std::cout<<"calling Animal copy assign op from this type \n";
        if(this != &original){
            Type = original.getType();
        }
        return *this;
    }
        void Animal::makesound() const {
            std::cout<<"Animal type "<<Type<< "make a sound\n";
        }
    std::string Animal::getType() const{
        return Type;
    }