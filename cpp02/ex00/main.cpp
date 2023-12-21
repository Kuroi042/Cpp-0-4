#include "Fixed.hpp"

int main()
    {
        Fixed a; // default const
        Fixed b(a); // copy constrac   
        // Fixed c; 
        // c =b; // copy assignement 
        // std::cout << a.getRawBits() << std::endl;
        // std::cout << b.getRawBits() << std::endl;
        // std::cout << c.getRawBits() << std::endl;
    }