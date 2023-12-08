#include "Fixed.hpp"
#include <stdio.h>
Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value =0;
    }

Fixed::Fixed(const Fixed &original)  // copy constractorpr
{
    std::cout << "Copy constractor called" << std::endl;
        *this  = original;

}

Fixed &Fixed::operator=(const Fixed &original)  //copy assignement constractor41
{
       std::cout << "Copy assignment operator called" << std::endl;
    if (this != &original)
    {
     this->value = original.getRawBits();
    }
    return *this;
}
void Fixed::setRawBits(int NewValue)
{
    value = NewValue;
}
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

Fixed::~Fixed()
{
    std::cout << "deconstractor is Called" << std::endl;
}
