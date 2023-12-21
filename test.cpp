#include <iostream>
#include <fstream>
#include <ctime>

template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

class MyClass {
    public:
        // MyClass();
        MyClass(int &x, char y, float z);
        // MyClass(std::string name);
        // MyClass(const MyClass& other);
        MyClass &operator=(const MyClass& other); // Assignment operator explicit
        MyClass &operator=(int x);
        ~MyClass();


        int &x;

    private:
        char y;
        float z;
        std::string name;
};

// MyClass::MyClass() {
//     x = 0;
//     y = 0;
//     z = 0.0f;
// }

MyClass::MyClass(int &x, char y = 0, float z = 0) : x(x) {
    this->y = y;
    this->z = z;
}

MyClass::~MyClass() {}

// MyClass::MyClass(std::string name) {
//     this->name = name;
// }

// MyClass::MyClass(const MyClass& other) {
//     x = other.x;
//     y = other.y;
//     z = other.z;
//     name = other.name;
// }

MyClass  &MyClass::operator=(const MyClass& other) {
    if (this != &other) {
        x = other.x;
        y = other.y;
        z = other.z;
        name = other.name;
    }
    return *this;
}

MyClass &MyClass::operator=(int x) {
    this->x = x;
    return *this;
}

int main(void) {


    // float a = 1.2 , b = 2.1;

    // ::swap(a, b);

    // std::cout << a << " | " << b << std::endl;
    // int z = 99;


    // int i = 0;
    // char *ptr[4];
    // std::string levels[4] = {"1", "2", "3", "4"};
    // std::string level = "4";

    // for (i; i < 4; i++) {
    //     if (levels[i] == level)
    //     break ;
    // }
    // switch (i)
    // {
    // case 0 ... 4:
    //     int j = 0;
    //     while (j < i) {
    //         ptr[j] = new char[10];
    //         j++;
    //     }
    //     break;
    
    // default:
    //     break;
    // }
    // // MyClass a("Hmed"), b("Hicham"), c(z);
    // // a = b;

    // MyClass c(z);

    // std::cout << c.x << std::endl;
    // z = 100;
    // std::cout << "AFTER" << c.x << std::endl;

}