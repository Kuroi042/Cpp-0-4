#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <stdio.h>

int main()
{

const Animal *dog =  new Dog();
const Animal *cat =  new Cat();

//basic test
std::cout<<dog->getType()<<std::endl;
std::cout<<cat->getType()<<std::endl;
dog->makesound();
cat->makesound();
Cat cat1;
Cat cat2;

cat2 = cat1;

std::cout<<"Cat1 idea == "<<cat1.getBrain().GetIdeas(0)<<std::endl;
std::cout<<"Cat2 idea == "<<cat2.getBrain().GetIdeas(0)<<std::endl;

printf("after modificatoiob\n");

cat1.getBrain().setIdeas("<<heres new idea>>",0);

std::cout<<"Cat1 idea == "<<cat1.getBrain().GetIdeas(0)<<std::endl;
std::cout<<"Cat2 idea == "<<cat2.getBrain().GetIdeas(0)<<std::endl;

//     // luna.getBrain().SetIdeas("hello", 0);
//     // std::cout << luna.getBrain().GetIdeas(0) << "\n";
//     // std::cout << bella.getBrain().GetIdeas(0) << "\n";

//clean;
// delete dog;
// delete cat;


    }


//     std::cout << "\n\n==================   BASIC TEST   ==================\n" << std::endl;
    
//     const Animal* dog = new Dog();
//      const Animal* cat = new Cat();

//     std::cout << dog->getType() << std::endl;
//      std::cout << cat->getType() << std::endl;
    
//      dog->makeSound();
//      cat->makeSound();

//     // std::cout << "\n\n==================   CLEAN ALL    ==================\n" << std::endl;
//     // delete dog;
//     // delete cat;
    

//     // // TEST DEEP COPY
//     // std::cout << "\n\n================== TEST DEEP COPY ==================\n" << std::endl;

//     // Cat luna;
//     // Cat bella;

//     // bella = luna;

//     // luna.getBrain().SetIdeas("hello", 0);
//     // std::cout << luna.getBrain().GetIdeas(0) << "\n";
//     // std::cout << bella.getBrain().GetIdeas(0) << "\n";

//     // std::cout << "\n\n================ SUBJECT ARRAY TEST ================\n" << std::endl;

//     // const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
//     // for ( int i = 0; i < 4; i++ )
//     // {
//     //     delete animals[i];
//     // }
//     // std::cout << "\n\n=====================\n\n";
//     // system("leaks Animal");
//     return 0;
// }