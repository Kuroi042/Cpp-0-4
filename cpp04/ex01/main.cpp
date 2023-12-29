#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <stdio.h>



int main()
{

// const Animal *dog =  new Dog();
// const Animal *cat =  new Cat();

//basic test
// std::cout<<dog->getType()<<std::endl;
// std::cout<<cat->getType()<<std::endl;
// dog->makesound();
// cat->makesound();
Cat cat1;
// Cat cat2(cat1);
Cat cat2;
cat2 =  cat1;

// printf("-------------------- default value\n");

// std::cout<<"Cat1 idea == "<<cat1.getBrain().GetIdeas(0)<<std::endl;
// std::cout<<"Cat2 idea == "<<cat2.getBrain().GetIdeas(0)<<std::endl;


// printf("-------------------- New Idea\n");

// cat1.getBrain().setIdeas("<<heres new idea>>",0);
// // cat2 = cat1


// std::cout<<"Cat1 idea == "<<cat1.getBrain().GetIdeas(0)<<std::endl;
// std::cout<<"Cat2 idea == "<<cat2.getBrain().GetIdeas(0)<<std::endl;

// printf("-------------------- New   New Idea\n");

// cat1.getBrain().setIdeas("<<heres new idea2222>>",0);

// std::cout<<"Cat1 idea == "<<cat1.getBrain().GetIdeas(0)<<std::endl;
// std::cout<<"Cat2 idea == "<<cat2.getBrain().GetIdeas(0)<<std::endl;


// //clean;
// delete dog;
// delete cat;


}