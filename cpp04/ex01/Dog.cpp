#include "Dog.hpp"

Dog::Dog():Animal("Dog"){

    brain =  new Brain();
    
    std::cout<<"Calling Dog constractor"<<std::endl;
}

Dog::Dog(const Dog &original) : Animal(original){
std::cout << "Dog copy constructor " << std::endl;
    brain = new Brain(*(original.brain));
    *this = original;
}

Dog &Dog::operator=(const Dog &original){
std::cout << "Dog assignment op constructor "<< std::endl;
    if(this!= &original){
        *brain= *original.brain;
        Type =  original.Type;
    }
    return *this;
}

Dog::~Dog(){
    delete brain;
        std::cout<<"Calling Dog Dectractor "<<std::endl;
}

void Dog::makesound()const{
	std::cout << "Dog  haw haw" << std::endl;
}

Brain& Dog::getBrain()const{
    return *this->brain;
}
 
