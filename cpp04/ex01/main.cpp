#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
int main()
{
    Animal *array[100];

    int i =0;
    while(i<100){
        if(i <50)
            array[i] =  new (Dog);
            else 
        array[i] =  new (Cat);
        i++;
    }
    i = 0;

while(i<100){
    delete array[i];
    i++;
}

}