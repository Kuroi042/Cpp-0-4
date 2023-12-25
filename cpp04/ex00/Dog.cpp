#include "Dog.hpp"

Dog::Dog(){
    std::cout<<"Calling Dog constractor Type == "<<Type<<std::endl;
}
Dog::Dog(const Dog &original){

std::cout << "Dog copy constructor type : " << original.Type << std::endl;

    Type  = original.Type;
}
Dog &Dog::operator=(const Dog &original){
std::cout << "Dog assignment op constructor type : " << original.Type << std::endl;
if(this!= &original){
    Type = original.Type;
}
    return *this;
}
Dog::~Dog(){
        std::cout<<"Calling Dog Dectractor Type == "<<Type<<std::endl;
}
void Dog::makesound()const{
	std::cout << "Dog type : " << Type << " makes a sound" << std::endl;
}
std::string Dog::getType()const{
    return Type;
}
