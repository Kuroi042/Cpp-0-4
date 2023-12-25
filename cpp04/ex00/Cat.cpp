#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "calling Cat constractor\n";
}
Cat::~Cat()
{
    std::cout << "calling Cat deconstractor\n";
}
Cat::Cat(Cat &original){
std::cout << "Cat Copy constractor called this type : " << original.Type << std::endl;
    *this =  original;
}
Cat &Cat::operator=(Cat &original){

	std::cout << "Cat assignation operator called to assign type : " << original.Type << std::endl;
    if(this!= &original){
        Type =  original.Type;
    }
    return *this;
}
void Cat::makesound()
{
    std::cout << "Cat "<<Type<<" is saying Miaw Miaw\n";
}
Cat::~Cat(){
    std::cout << "Cat destructor  type : " << Type << std::endl;
}
