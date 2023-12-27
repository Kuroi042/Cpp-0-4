#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
int main()

{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << "Dog" << std::endl;
std::cout << i->getType() << "Cat" << std::endl;
i->makesound(); 
j->makesound();
meta->makesound();


delete(i);
delete(j);
delete(meta);
return 0;
}