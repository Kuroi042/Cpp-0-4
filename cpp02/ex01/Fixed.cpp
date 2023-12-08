#include "Fixed.hpp"
#include <stdio.h>
#include "Fixed.hpp"

Fixed::Fixed(void) {
    std::cout << "Default constructor called\n";
    Value = 0;
}

Fixed::Fixed(const Fixed &fixed) {
    std::cout << "Copy constructor called\n";
    *this = fixed;
}

Fixed::Fixed(const int n_int) {
    std::cout << "Int constructor called\n";
    Value = n_int <<bits ;
}

Fixed::Fixed(const float f_float) {
    std::cout << "Float constructor called\n";
    Value = roundf(f_float * (1 << bits));
}

Fixed::~Fixed() {
    std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=(const Fixed &fixed) {
    std::cout << "Copy assignment operator called\n";
    Value = fixed.Value;
    return (*this);
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called\n";
    return (Value);
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called\n";
    Value = raw;
}

float Fixed::toFloat(void) const {
    return ((float)Value / (1 << bits));
}

int Fixed::toInt(void) const {
    return (Value >> bits);
}

std::ostream &Fixed::output(std::ostream &o) const {
    o << toFloat();
    return o;
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed) {
    return fixed.output(out);
}