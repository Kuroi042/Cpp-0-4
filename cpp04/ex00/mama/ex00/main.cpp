

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " dog dog" << std::endl;
std::cout << i->getType() << " cat cat " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

return 0;
}