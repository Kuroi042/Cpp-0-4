#include "Animal.hpp"


    Animal::Animal(){
            Type =  "Empty";
        std::cout<<"calling Animal constractor default Type == " <<Type<<std::endl;
    }

    Animal::Animal(Animal &original){
        std::cout<<"calling Animal copy constractor "<< original.Type<<std::endl;
        Type = original.Type;
    }
    Animal::~Animal(){
        std::cout<<"calling Animal deconstractor Type == "<<Type<<std::endl;
    }

    Animal &Animal::operator=(const Animal &original){
            std::cout<<"calling Animal copy assign op from this type "<<original.Type<<std::endl;
        if(this != &original){
            Type = original.Type;
        }
        return *this;
    }
        void Animal::makesound() const {
            std::cout<<"Animal type "<<Type<< "make a sound\n";
        }
    std::string Animal::getType() const{
        return Type;
    }