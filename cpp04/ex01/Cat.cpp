#include "Cat.hpp"

Cat::Cat()
{
    Type = "Cat";
    std::cout << "calling Cat constractor "<<std::endl;
    this->brain = new Brain();
}

Cat::~Cat()
{
    delete brain;
     std::cout << "calling Cat destractor   "<<std::endl;
}

Cat::Cat(const Cat& original) : Animal(original) {
    std::cout << "Cat: copy constructor called" << std::endl;
         this->brain = new Brain(); // alocate new brain object fot the current Cat
    *this = original;
}

Cat &Cat::operator=(const Cat &original){
	std::cout << "Cat assignation operator called to assign  "<< std::endl;
    if(this!= &original){
        *brain= *original.brain;
        Type =  original.Type;
    }
    return *this;
}


Brain& Cat::getBrain()const{
    return *this->brain;
}
void Cat::makesound() const
{
    std::cout << "Cat  Miaw\n";
}
    

