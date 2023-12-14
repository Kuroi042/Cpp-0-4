#include <iostream>
#include <stdio.h>
#include <cstring> // For using string functions

class A {
private:
 
    std::string Name1;
    int age;
    int hight;

public:
    A(std::string name)  {
        Name1  = name;  
        age = 12;
        hight = 45;
        std::cout << "A Constructor called\n";
    }
    ~A() {
        std::cout << "A Destructor called\n";
    }

};
class B : public A {
    protected:
    std::string Nameb; 
    public :
    B(std::string newName , std::string oldname):A(oldname) ,Nameb(newName){
        std::cout<<Nameb<<std::endl;
        

            printf("constractor of B class");
    }
    ~B(){

    }


};
int main(){
    B myb("zebi", "9lawi");
    

}

