#include "Animal.hpp"


    Animal::Animal(){
            Type =  "none";
        std::cout<<"calling Animal constractor default Type\n";
    }

    Animal::~Animal(){
        std::cout<<"calling Animal deconstractor\n";
    }
    Animal::Animal(Animal &original){
        std::cout<<"calling Animal copy constractor "<< original.Type<<std::endl;
        Type = original.Type;
    }
    Animal &Animal::operator=(Animal &original){
            std::cout<<"calling Animal copy assign op from this type "<<original.Type<<std::endl;
        if(this != &original){
            Type = original.Type;
        }
        return *this;
    }
        void Animal::makesound(){
            std::cout<<"Animal type "<<Type<< "make a sound\n";
        }
    std::string Animal::getType(){
        return Type;
    }
    void 