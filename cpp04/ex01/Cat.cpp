#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "calling Cat constractor Type  == "<< Type<<std::endl;
    Type = "Cat";
    brain = new Brain();
}

Cat::~Cat()
{
    delete brain;
     std::cout << "calling Cat destractor Type  == "<< Type<<std::endl;
}

Cat::Cat(const Cat& original) : Animal(original) {
    std::cout << "Cat: copy constructor called" << std::endl;

        brain = new Brain(*(original.brain));
}

Cat &Cat::operator=(const Cat &original){

	std::cout << "Cat assignation operator called to assign type : " << original.Type << std::endl;
    if(this!= &original){
        Type =  original.getType();
        *brain= *(original.brain);
    }
    return *this;
}

void Cat::makesound() const
{
    std::cout << "Cat "<<Type<<" is Making a Sound <<Miaw>>\n";
}
 
