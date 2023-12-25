#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << "dogg dogg" << std::endl;
std::cout << i->getType() << "Catt catt" << std::endl;
i->makesound(); 
i->makesound(); 
// j->makesound();
meta->makesound();
delete(i);
delete(j);
delete(meta);
return 0;
}