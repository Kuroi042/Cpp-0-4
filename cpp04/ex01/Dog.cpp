#include "Dog.hpp"

Dog::Dog(){
    Type  = "Dog";
    brain =  new Brain();
    std::cout<<"Calling Dog constractor Type == "<<Type<<std::endl;
}

Dog::Dog(const Dog &original) : Animal(original){
std::cout << "Dog copy constructor type : " << original.Type << std::endl;
    brain = new Brain(*(original.brain));
}

Dog &Dog::operator=(const Dog &original){
std::cout << "Dog assignment op constructor type : " << original.Type << std::endl;
    if(this!= &original){
        Type =  original.getType();
        *brain= *(original.brain);
    }
    return *this;
}

Dog::~Dog(){
    delete brain;
        std::cout<<"Calling Dog Dectractor "<<std::endl;
}

void Dog::makesound()const{
	std::cout << "Dog type: makes a sound haw haw" << std::endl;
}
 
