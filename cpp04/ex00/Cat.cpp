#include "Cat.hpp"

Cat::Cat()
{
    Type = "Cat";
    std::cout << "calling Cat constractor Type  == "<< Type<<std::endl;
}
Cat::~Cat()
{
     std::cout << "calling Cat destractor Type  == "<< Type<<std::endl;
}
Cat::Cat(const Cat &original){
std::cout << "Cat Copy constractor called this type : " << original.Type << std::endl;
    *this =  original;
}
Cat &Cat::operator=(const Cat &original){

	std::cout << "Cat assignation operator called to assign type : " << original.Type << std::endl;
    if(this!= &original){
        Type =  original.Type;
    }
    return *this;
}
void Cat::makesound()const
{
    std::cout << "Cat "<<Type<<" is Making a Sound\n";
}
std::string Cat::getType() const{
        return Type;
}
